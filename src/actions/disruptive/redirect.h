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

#ifndef SRC_ACTIONS_DISRUPTIVE_REDIRECT_H_
#define SRC_ACTIONS_DISRUPTIVE_REDIRECT_H_

#ifdef __cplusplus
class Transaction;

namespace celeowaf {
class Transaction;

namespace actions {
namespace disruptive {


class Redirect : public Action {
 public:
    explicit Redirect(const std::string &action)
        : Action(action, RunTimeOnlyIfMatchKind),
        m_status(0),
        m_string(nullptr) { }

    explicit Redirect(std::unique_ptr<RunTimeString> z)
        : Action("redirert", RunTimeOnlyIfMatchKind),
            m_status(0),
            m_string(std::move(z)) { }

    bool evaluate(RuleWithActions *rule, Transaction *transaction,
        std::shared_ptr<RuleMessage> rm) override;
    bool init(std::string *error) override;
    bool isDisruptive() override { return true; }

 private:
    int m_status;
    std::unique_ptr<RunTimeString> m_string;
};


}  // namespace disruptive
}  // namespace actions
}  // namespace celeowaf
#endif

#endif  // SRC_ACTIONS_DISRUPTIVE_REDIRECT_H_
