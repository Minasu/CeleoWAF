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

#include "src/actions/transformations/lower_case.h"

#include <algorithm>
#include <string>

#include "celeowaf/transaction.h"
#include "src/actions/transformations/transformation.h"
#include "celeowaf/actions/action.h"

namespace celeowaf {
namespace actions {
namespace transformations {


LowerCase::LowerCase(const std::string &a)
    : Transformation(a) {
}

std::string LowerCase::evaluate(const std::string &val,
    Transaction *transaction) {
    std::locale loc;
    std::string value(val);

    for (std::string::size_type i=0; i < value.length(); ++i) {
        value[i] = std::tolower(value[i], loc);
    }

    return value;
}

}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf
