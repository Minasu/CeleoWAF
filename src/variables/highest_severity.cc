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

#include "src/variables/highest_severity.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <utility>

#include "celeowaf/transaction.h"

namespace celeowaf {
namespace variables {

void HighestSeverity::evaluate(Transaction *transaction,
    RuleWithActions *rule,
    std::vector<const VariableValue *> *l) {
    transaction->m_variableHighestSeverityAction.assign(
        std::to_string(transaction->m_highestSeverityAction));
    l->push_back(new VariableValue(m_fullName.get(),
       &transaction->m_variableHighestSeverityAction));
}


}  // namespace variables
}  // namespace celeowaf
