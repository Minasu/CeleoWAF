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
#include <utility>

#include "celeowaf/actions/action.h"
#include "celeowaf/rule_message.h"
#include "src/run_time_string.h"

#ifndef SRC_ACTIONS_MSG_H_
#define SRC_ACTIONS_MSG_H_

class Transaction;

namespace celeowaf {
class Transaction;
namespace actions {


class Msg : public Action {
 public:
    explicit Msg(const std::string &action) 
        : Action(action, RunTimeOnlyIfMatchKind) { }

    explicit Msg(std::unique_ptr<RunTimeString> z)
        : Action("msg", RunTimeOnlyIfMatchKind),
            m_string(std::move(z)) { }

    bool evaluate(RuleWithActions *rule, Transaction *transaction,
        std::shared_ptr<RuleMessage> rm) override;

    std::string data(Transaction *Transaction);
    std::unique_ptr<RunTimeString> m_string;
};


}  // namespace actions
}  // namespace celeowaf

#endif  // SRC_ACTIONS_MSG_H_
