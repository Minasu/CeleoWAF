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
#include "celeowaf/rule_message.h"

#ifndef SRC_ACTIONS_DATA_STATUS_H_
#define SRC_ACTIONS_DATA_STATUS_H_

#ifdef __cplusplus
class Transaction;

namespace celeowaf {
class Transaction;
namespace actions {
namespace data {


class Status : public Action {
 public:
    explicit Status(const std::string &action) : Action(action, 2),
    m_status(0) { }

    bool init(std::string *error) override;
    bool evaluate(RuleWithActions *rule, Transaction *transaction,
        std::shared_ptr<RuleMessage> rm) override;

    int m_status;
};


}  // namespace data
}  // namespace actions
}  // namespace celeowaf
#endif

#endif  // SRC_ACTIONS_DATA_STATUS_H_
