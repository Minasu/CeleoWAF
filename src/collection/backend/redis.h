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


#ifdef __cplusplus
#include <string>
#include <cstring>
#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>
#include <memory>
#include <ctime>
#include <chrono>
#endif

#ifdef WITH_REDIS
#include <hiredis/hiredis.h>
#endif  // WITH_REDIS
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <pthread.h>

#include "celeowaf/variable_value.h"
#include "celeowaf/collection/collection.h"
#include "src/variables/variable.h"

using namespace std::chrono;

#ifndef SRC_COLLECTION_BACKEND_REDIS_H_
#define SRC_COLLECTION_BACKEND_REDIS_H_

#ifdef WITH_REDIS

#ifdef __cplusplus
namespace celeowaf {
namespace collection {
namespace backend {

class REDIS :
    public Collection {
 public:
    explicit REDIS(std::string name);
	~REDIS();
    void store(std::string key, std::string value) override;

    bool storeOrUpdateFirst(const std::string &key,
        const std::string &value) override;

    bool updateFirst(const std::string &key,
        const std::string &value) override;

    void del(const std::string& key) override;

    std::unique_ptr<std::string> resolveFirst(const std::string& var) override;

    void resolveSingleMatch(const std::string& var,
        std::vector<const VariableValue *> *l) override;
    void resolveMultiMatches(const std::string& var,
        std::vector<const VariableValue *> *l,
        variables::KeyExclusions &ke) override;
    void resolveRegularExpression(const std::string& var,
        std::vector<const VariableValue *> *l,
        variables::KeyExclusions &ke) override;
		
	void countReqLimit(const std::string& var,
        std::vector<const VariableValue *> *l) override;
	bool insertReqLimit(const std::string &key,
        const std::string &value) override;

 private:
    redisContext *connect ;
};

}  // namespace backend
}  // namespace collection
}  // namespace celeowaf
#endif

#endif  // WITH_REDIS

#endif  // SRC_COLLECTION_BACKEND_REDIS_H_
