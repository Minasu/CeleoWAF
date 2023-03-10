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

#include "src/actions/ctl/rule_engine.h"

#include <iostream>
#include <string>

#include "celeowaf/rules_set_properties.h"
#include "celeowaf/rules_set.h"
#include "celeowaf/transaction.h"

namespace celeowaf {
namespace actions {
namespace ctl {


bool RuleEngine::init(std::string *error) {
    std::string what(m_parser_payload, 11, m_parser_payload.size() - 11);

    if (what == "on") {
        m_ruleEngine = RulesSetProperties::EnabledRuleEngine;
    } else if (what == "off") {
        m_ruleEngine = RulesSetProperties::DisabledRuleEngine;
    } else if (what == "detectiononly") {
        m_ruleEngine = RulesSetProperties::DetectionOnlyRuleEngine;
    } else {
        error->assign("Internal error. Expected: On, Off or DetectionOnly; " \
            "got: " + m_parser_payload);
        return false;
    }

    return true;
}

bool RuleEngine::evaluate(RuleWithActions *rule, Transaction *transaction) {
    std::stringstream a;
    a << "Setting SecRuleEngine to ";
    a << celeowaf::RulesSetProperties::ruleEngineStateString(m_ruleEngine);
    a << " as requested by a ctl:ruleEngine action";

    ms_dbg_a(transaction, 8, a.str());

    transaction->m_secRuleEngine = m_ruleEngine;
    return true;
}


}  // namespace ctl
}  // namespace actions
}  // namespace celeowaf
