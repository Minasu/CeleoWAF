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

#include "src/actions/log_data.h"

#include <iostream>
#include <string>
#include <memory>

#include "celeowaf/actions/action.h"
#include "celeowaf/transaction.h"
#include "celeowaf/rule.h"
#include "celeowaf/rule_message.h"


namespace celeowaf {
namespace actions {


bool LogData::evaluate(RuleWithActions *rule, Transaction *transaction,
    std::shared_ptr<RuleMessage> rm) {
    rm->m_data = data(transaction);

    return true;
}

std::string LogData::data(Transaction *transaction) {
    std::string a(m_string->evaluate(transaction));
    return a;
}


}  // namespace actions
}  // namespace celeowaf
