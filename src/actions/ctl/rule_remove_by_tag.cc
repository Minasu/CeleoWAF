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

#include "src/actions/ctl/rule_remove_by_tag.h"

#include <iostream>
#include <string>

#include "celeowaf/transaction.h"

namespace celeowaf {
namespace actions {
namespace ctl {


bool RuleRemoveByTag::init(std::string *error) {
    std::string what(m_parser_payload, 16, m_parser_payload.size() - 16);
    m_tag = what;

    return true;
}

bool RuleRemoveByTag::evaluate(RuleWithActions *rule, Transaction *transaction) {
    transaction->m_ruleRemoveByTag.push_back(m_tag);
    return true;
}


}  // namespace ctl
}  // namespace actions
}  // namespace celeowaf
