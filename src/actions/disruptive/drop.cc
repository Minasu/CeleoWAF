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

#include "src/actions/disruptive/drop.h"

#include <string.h>
#include <iostream>
#include <string>
#include <cstring>
#include <memory>

#include "celeowaf/rules_set.h"
#include "celeowaf/transaction.h"
#include "celeowaf/rule.h"
#include "src/utils/string.h"
#include "celeowaf/celeowaf.h"

namespace celeowaf {
namespace actions {
namespace disruptive {


bool Drop::evaluate(RuleWithActions *rule, Transaction *transaction,
    std::shared_ptr<RuleMessage> rm) {
    ms_dbg_a(transaction, 8, "Running action drop " \
        "[executing deny instead of drop.]");

    if (transaction->m_it.status == 200) {
        transaction->m_it.status = 403;
    }

    transaction->m_it.disruptive = true;
    intervention::freeLog(&transaction->m_it);
    rm->m_isDisruptive = true;
    transaction->m_it.log = strdup(
        rm->log(RuleMessage::LogMessageInfo::ClientLogMessageInfo).c_str());

    return true;
}


}  // namespace disruptive
}  // namespace actions
}  // namespace celeowaf
