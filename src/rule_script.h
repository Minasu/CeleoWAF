
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

#include <string>
#include <memory>
#include <vector>

#include "celeowaf/rules_set.h"
#include "celeowaf/rule.h"
#include "src/engine/lua.h"
#include "src/operators/operator.h"
#include "celeowaf/actions/action.h"
#include "celeowaf/celeowaf.h"
#include "src/actions/transformations/none.h"
#include "src/actions/tag.h"
#include "src/utils/string.h"
#include "celeowaf/rule_message.h"
#include "src/actions/msg.h"
#include "src/actions/log_data.h"
#include "src/actions/severity.h"
#include "src/variables/variable.h"

#ifndef SRC_RULE_SCRIPT_H_
#define SRC_RULE_SCRIPT_H_


namespace celeowaf {

using actions::Action;

/** @ingroup CeleoWAF_CPP_API */
class RuleScript : public RuleWithActions {
 public:
    RuleScript(const std::string &name,
        std::vector<Action *> *actions,
        Transformations *t,
        std::unique_ptr<std::string> fileName,
        int lineNumber)
            : RuleWithActions(actions, t, std::move(fileName), lineNumber),
        m_name(name),
        m_lua() { }

    RuleScript(const RuleWithActions& r) = delete;

    bool init(std::string *err);
    bool evaluate(Transaction *trans,
        std::shared_ptr<RuleMessage> ruleMessage) override;


    std::string m_name;
    engine::Lua m_lua;
};

}  // namespace celeowaf

#endif  // SRC_RULE_SCRIPT_H_

