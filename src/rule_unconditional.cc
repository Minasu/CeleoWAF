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

#include "celeowaf/rule_unconditional.h"


namespace celeowaf {


bool RuleUnconditional::evaluate(Transaction *trans,
    std::shared_ptr<RuleMessage> ruleMessage) {
    RuleWithActions::evaluate(trans, ruleMessage);

    // FIXME: This needs to be romeved on the runtime exeption review.
    bool containsBlock = false;

    ms_dbg_a(trans, 4, "(Rule: " + std::to_string(m_ruleId) \
        + ") Executing unconditional rule...");

    executeActionsIndependentOfChainedRuleResult(trans,
        &containsBlock, ruleMessage);

    executeActionsAfterFullMatch(trans, containsBlock, ruleMessage);

    performLogging(trans, ruleMessage);

    return true;
}

}  // namespace celeowaf
