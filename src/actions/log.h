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

#include "celeowaf/actions/action.h"

#ifndef SRC_ACTIONS_LOG_H_
#define SRC_ACTIONS_LOG_H_

class Transaction;

namespace celeowaf {
class Transaction;
namespace actions {


class Log : public Action {
 public:
    explicit Log(const std::string &action) 
        : Action(action, RunTimeOnlyIfMatchKind) { }

    bool evaluate(RuleWithActions *rule, Transaction *transaction,
        std::shared_ptr<RuleMessage> rm) override;
};

}  // namespace actions
}  // namespace celeowaf


#endif  // SRC_ACTIONS_LOG_H_
