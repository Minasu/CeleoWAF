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

#ifdef __cplusplus
#include <iostream>
#include <fstream>
#include <string>
#endif

#include <amqp.h>
#include <amqp_tcp_socket.h>

#include "src/unique_id.h"

#ifndef SRC_AUDIT_LOG_WRITER_AMQP_H_
#define SRC_AUDIT_LOG_WRITER_AMQP_H_

#include "src/audit_log/writer/writer.h"
#include "celeowaf/transaction.h"

#ifdef __cplusplus

namespace celeowaf {
namespace audit_log {
namespace writer {

/** @ingroup ModSecurity_CPP_API */
class AMQP : public Writer {
 public:
    explicit AMQP(audit_log::AuditLog *audit)
        : audit_log::writer::Writer(audit) { }

    ~AMQP() override;

    bool init(std::string *error) override;
    bool write(Transaction *transaction, int parts,
        std::string *error) override;
 private:
	int connected = 0;
	std::string exchange;
	amqp_socket_t *socket = NULL;
	amqp_connection_state_t conn;
};

}  // namespace writer
}  // namespace audit_log
}  // namespace celeowaf
#endif

#endif  // SRC_AUDIT_LOG_WRITER_AMQP_H_
