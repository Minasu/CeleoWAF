/*
 * CeleoWAF, http://www.celeowaf.org/
 * Copyright (c) 2023 - 2023 Celeonet SAS (http://www.celeonet.fr/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Celeonet SAS.
 * directly using the email address security@celewaf.org.
 *
 */

#include "src/audit_log/writer/amqp.h"

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <fstream>
#include <mutex>

#include "celeowaf/rules_set.h"
#include "celeowaf/audit_log.h"
#include "celeowaf/transaction.h"
#include "src/utils/md5.h"
#include "src/utils/https_client.h"
#include "src/utils/regex.h"

namespace celeowaf {
namespace audit_log {
namespace writer {
	
AMQP::~AMQP() {
	amqp_destroy_connection(conn);
}


bool AMQP::init(std::string *error) {	
	int status;
	std::string protocol, username, password, hostname, port;
	amqp_bytes_t queuename;
	
	Utils::Regex config("(amqp|amqs)://([a-zA-Z0-9_-]+):([a-zA-Z0-9#?!$%^&*-]+)@([a-z0-9-.]+):([1-9][0-9]{0,3}|[1-5][0-9]{4}|6[0-4][0-9]{3}|65[0-4][0-9]{2}|655[0-2][0-9]|6553[0-5])/([a-zA-Z0-9-_.]+)");
	
	std::list<Utils::SMatch> vars = config.searchAll(m_audit->m_path1.c_str());
	
	conn = amqp_new_connection();
	
	if(vars.size() >= 7) {

		vars.pop_back();
		protocol = vars.back().str();
		vars.pop_back();
		username = vars.back().str();
		vars.pop_back();
		password = vars.back().str();
		vars.pop_back();
		hostname = vars.back().str();
		vars.pop_back();
		port = vars.back().str();
		vars.pop_back();
		exchange = vars.back().str();
		
		socket = amqp_tcp_socket_new(conn);
		
		if (!socket) {
			return true;
		}
		
		status = amqp_socket_open(socket, hostname.c_str(), atoi(port.c_str()));
		if (status) {
			return true;
		}
		
		amqp_rpc_reply_t login = amqp_login(conn, "/", 200, 131072, 0, AMQP_SASL_METHOD_PLAIN, username.c_str(), password.c_str());
		
		if(login.reply_type == AMQP_RESPONSE_NORMAL ) {
			amqp_channel_open(conn, 1);
			connected = 1;
		}
		
		password.clear();
	}
	
    return true;
}

bool AMQP::write(Transaction *transaction, int parts, std::string *error) {
	std::string log = transaction->toJSON(parts);
	
	if(connected) {	
		amqp_basic_publish(conn, 1, amqp_cstring_bytes(exchange.c_str()), amqp_cstring_bytes(UniqueId::uniqueId().c_str()), 0, 0, NULL, amqp_cstring_bytes(log.c_str()));
	}
	
    return true;
}

}  // namespace writer
}  // namespace audit_log
}  // namespace celeowaf
