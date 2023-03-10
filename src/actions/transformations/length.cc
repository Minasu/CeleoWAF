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

#include "src/actions/transformations/length.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>

#include "celeowaf/transaction.h"
#include "src/actions/transformations/transformation.h"


namespace celeowaf {
namespace actions {
namespace transformations {

Length::Length(const std::string &action) 
    : Transformation(action) {
    this->action_kind = 1;
}

std::string Length::evaluate(const std::string &value,
    Transaction *transaction) {

    return std::to_string(value.size());
}

}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf
