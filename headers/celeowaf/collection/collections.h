/*
 * CeleoWAF, http://www.celeowaf.org/
 * Copyright (c) 2015 - 2021 Trustwave Holdings, Inc. (http://www.trustwave.com/)
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
#include <ctime>
#include <iostream>
#include <unordered_map>
#include <fstream>
#include <vector>
#include <iomanip>
#include <set>
#include <cstdio>
#include <string>
#include <list>
#include <memory>
#endif

#include "celeowaf/collection/collection.h"
#include "celeowaf/variable_value.h"

#ifndef HEADERS_CELEOWAF_COLLECTION_COLLECTIONS_H_
#define HEADERS_CELEOWAF_COLLECTION_COLLECTIONS_H_

#ifndef __cplusplus
typedef struct Collections_t Collections;
#endif

#ifdef __cplusplus

namespace celeowaf {
namespace collection {

class Collections {
 public:
    Collections(Collection *global, Collection *ip, Collection *session,
        Collection *user, Collection *resource, Collection *reqlimit);
    ~Collections();

    Collections(const Collections &c) = delete;
    Collections& operator =(const Collections &c) = delete;

    std::string m_global_collection_key;
    std::string m_ip_collection_key;
    std::string m_session_collection_key;
    std::string m_user_collection_key;
    std::string m_resource_collection_key;
	std::string m_reqlimit_collection_key;

    Collection *m_global_collection;
    Collection *m_ip_collection;
    Collection *m_session_collection;
    Collection *m_user_collection;
    Collection *m_resource_collection;
	Collection *m_reqlimit_collection;
    Collection *m_tx_collection;
};

}  // namespace collection
}  // namespace celeowaf
#endif


#endif  // HEADERS_CELEOWAF_COLLECTION_COLLECTIONS_H_


