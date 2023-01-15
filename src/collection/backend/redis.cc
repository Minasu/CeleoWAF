/*
 * CeleoWAF, http://www.celeowaf.org/
 * Copyright (c) 2023 - 2023 Celeonet SAS (https://www.celeonet.fr/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@celeowaf.org.
 *
 */


#include "src/collection/backend/redis.h"

#include <sys/types.h>
#include <unistd.h>

#include <string>
#include <memory>

#include <pthread.h>

#include "celeowaf/variable_value.h"
#include "src/utils/regex.h"
#include "src/variables/variable.h"

#undef REDIS_STDOUT_COUT

namespace celeowaf {
namespace collection {
namespace backend {


#ifdef WITH_REDIS

struct Redis
{
  const uint32_t id;
  const char *name;
};

REDIS::REDIS(std::string name) :
    Collection(name), connect(NULL) {
	
	connect = redisConnect("127.0.0.1", 6379);
	
}

REDIS::~REDIS() {
    redisFree(connect);
}

std::unique_ptr<std::string> REDIS::resolveFirst(const std::string& var) {
    std::unique_ptr<std::string> ret = NULL;
	
	return ret;
}


bool REDIS::storeOrUpdateFirst(const std::string &key,
    const std::string &value) {

	redisCommand(connect, "SET %s %s", key.c_str(), value.c_str());
    
    return true;
}


void REDIS::resolveSingleMatch(const std::string& var,
    std::vector<const VariableValue *> *l) {
	redisReply *reply;
	
	reply = (redisReply *) redisCommand(connect, "KEYS %s:*", var.c_str());
	
	l->insert(l->begin(), new VariableValue(
		&m_name,
		&var,
		new std::string(std::to_string(reply->elements))
	));
		
    return;
}


void REDIS::store(std::string key, std::string value) {

    return;
}


bool REDIS::updateFirst(const std::string &key,
    const std::string &value) {
    
    return true;
}


void REDIS::del(const std::string& key) {
    int rc;
	
	redisCommand(connect, "DEL %s", key.c_str());
    
    return;
}


void REDIS::resolveMultiMatches(const std::string& var,
    std::vector<const VariableValue *> *l,
    variables::KeyExclusions &ke) {
	int rc;
	unsigned int j;
    size_t keySize = var.size();
	redisReply *reply, *reply1;
	char *key;
	
	if (keySize == 0) {
		reply = (redisReply *) redisCommand(connect, "KEYS *");
		for (j = 0; j < reply->elements; j++) {			
			reply1 = (redisReply *) redisCommand(connect, "GET %s", reply->element[j]->str);

			l->insert(l->begin(), new VariableValue(
				&m_name,
				new std::string(reply->element[j]->str),
				new std::string(reply1->str)
			));
		}
    } else {
		reply = (redisReply *) redisCommand(connect, "GET %s", var.c_str());
		
		if(reply->str != NULL) {			
			l->insert(l->begin(), new VariableValue(
				&m_name,
				&var,
				new std::string(reply->str)
			));
		}
    }
    
    return;
}


void REDIS::resolveRegularExpression(const std::string& var,
    std::vector<const VariableValue *> *l,
    variables::KeyExclusions &ke) {
	
    return;
}

void REDIS::countReqLimit(const std::string& var,
    std::vector<const VariableValue *> *l) {
	redisReply *reply;

	reply = (redisReply *) redisCommand(connect, "KEYS %s:*", var.c_str());

	l->insert(l->begin(), new VariableValue(
		&m_name,
		&var,
		new std::string(std::to_string(reply->elements))
	));

    return;
}

bool REDIS::insertReqLimit(const std::string &key,
    const std::string &value) {

	std::string new_var = "";

	uint64_t ms = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();

	std::ostringstream oss;
	oss << ms;

	new_var.append(key);
	new_var.append(":");
	new_var.append(oss.str());

	redisCommand(connect, "SET %s 0 EX %s", new_var.c_str(), value.c_str());

    return true;
}

#endif

}  // namespace backend
}  // namespace collection
}  // namespace celeowaf
