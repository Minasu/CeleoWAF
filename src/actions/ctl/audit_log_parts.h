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

#ifndef SRC_ACTIONS_CTL_AUDIT_LOG_PARTS_H_
#define SRC_ACTIONS_CTL_AUDIT_LOG_PARTS_H_

namespace celeowaf {
namespace actions {
namespace ctl {


class AuditLogParts : public Action {
 public:
    explicit AuditLogParts(const std::string &action) 
        : Action(action, RunTimeOnlyIfMatchKind),
        mPartsAction(0),
        mParts("") { }

    bool evaluate(RuleWithActions *rule, Transaction *transaction) override;
    bool init(std::string *error) override;

 protected:
    int mPartsAction;
    std::string mParts;
};


}  // namespace ctl
}  // namespace actions
}  // namespace celeowaf

#endif  // SRC_ACTIONS_CTL_AUDIT_LOG_PARTS_H_
