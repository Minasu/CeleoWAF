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

#include "src/actions/init_col.h"

#include <iostream>
#include <string>

#include "celeowaf/actions/action.h"
#include "celeowaf/transaction.h"
#include "celeowaf/rule.h"


namespace celeowaf {
namespace actions {


bool InitCol::init(std::string *error) {
    int posEquals = m_parser_payload.find("=");

    if (m_parser_payload.size() < 2) {
        error->assign("Something wrong with initcol format: too small");
        return false;
    }
    if (posEquals == std::string::npos) {
        error->assign("Something wrong with initcol format: missing " \
                "equals sign");
        return false;
    }

    m_collection_key = std::string(m_parser_payload, 0,  posEquals);

    if (m_collection_key != "ip" &&
        m_collection_key != "global" &&
        m_collection_key != "resource" &&
		m_collection_key != "reqlimit") {
        error->assign("Something wrong with initcol: collection must be " \
            "'ip', 'global' or 'resource' or 'reqlimit'");
        return false;
    }

    return true;
}


bool InitCol::evaluate(RuleWithActions *rule, Transaction *t) {
    std::string collectionName(m_string->evaluate(t));

    if (m_collection_key == "ip") {
        t->m_collections.m_ip_collection_key = collectionName;
    } else if (m_collection_key == "global") {
        t->m_collections.m_global_collection_key = collectionName;
    } else if (m_collection_key == "resource") {
        t->m_collections.m_resource_collection_key = collectionName;
    } else if (m_collection_key == "reqlimit") {
        t->m_collections.m_reqlimit_collection_key = collectionName;
    } else {
        return false;
    }

    ms_dbg_a(t, 5, "Collection `" + m_collection_key + "' initialized with " \
        "value: " + collectionName);

    return true;
}

}  // namespace actions
}  // namespace celeowaf
