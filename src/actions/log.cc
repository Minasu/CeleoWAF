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

#include "src/actions/log.h"

#include <iostream>
#include <string>
#include <memory>

#include "celeowaf/actions/action.h"
#include "celeowaf/transaction.h"
#include "src/operators/operator.h"
#include "celeowaf/rule_message.h"

namespace celeowaf {
namespace actions {


bool Log::evaluate(RuleWithActions *rule, Transaction *transaction,
    std::shared_ptr<RuleMessage> rm) {
    ms_dbg_a(transaction, 9, "Saving transaction to logs");
    rm->m_saveMessage = true;
    return true;
}


}  // namespace actions
}  // namespace celeowaf
