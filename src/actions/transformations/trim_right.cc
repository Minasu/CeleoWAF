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

#include "src/actions/transformations/trim_right.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>

#include "celeowaf/transaction.h"
#include "src/actions/transformations/transformation.h"
#include "celeowaf/actions/action.h"

namespace celeowaf {
namespace actions {
namespace transformations {


TrimRight::TrimRight(const std::string &action) 
    : Trim(action) {
    this->action_kind = 1;
}

std::string TrimRight::evaluate(const std::string &val,
    Transaction *transaction) {
    std::string value(val);
    return *this->rtrim(&value);
}

}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf
