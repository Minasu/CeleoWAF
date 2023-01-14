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

#include "celeowaf/actions/action.h"
#include "celeowaf/transaction.h"


#ifndef SRC_ACTIONS_CTL_RULE_REMOVE_BY_TAG_H_
#define SRC_ACTIONS_CTL_RULE_REMOVE_BY_TAG_H_

namespace celeowaf {
namespace actions {
namespace ctl {


class RuleRemoveByTag : public Action {
 public:
    explicit RuleRemoveByTag(const std::string &action) 
        : Action(action, RunTimeOnlyIfMatchKind),
        m_tag("") { }

    bool init(std::string *error) override;
    bool evaluate(RuleWithActions *rule, Transaction *transaction) override;

    std::string m_tag;
};


}  // namespace ctl
}  // namespace actions
}  // namespace celeowaf

#endif  // SRC_ACTIONS_CTL_RULE_REMOVE_BY_TAG_H_
