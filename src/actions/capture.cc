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

#include "src/actions/capture.h"

#include <iostream>
#include <string>
#include <list>

#include "celeowaf/transaction.h"

#include "celeowaf/rule.h"
#include "src/operators/operator.h"
#include "src/operators/pm.h"
#include "src/operators/rx.h"
#include "src/operators/contains.h"
#include "src/operators/detect_sqli.h"

namespace celeowaf {
namespace actions {


bool Capture::evaluate(RuleWithActions *rule, Transaction *transaction) {
    return true;
}


}  // namespace actions
}  // namespace celeowaf
