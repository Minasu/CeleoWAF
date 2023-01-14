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

#include "src/actions/transformations/sha1.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>

#include "celeowaf/transaction.h"
#include "src/actions/transformations/transformation.h"
#include "src/utils/sha1.h"


namespace celeowaf {
namespace actions {
namespace transformations {

Sha1::Sha1(const std::string &action) 
    : Transformation(action) {
    this->action_kind = 1;
}

std::string Sha1::evaluate(const std::string &value,
    Transaction *transaction) {

    return Utils::Sha1::digest(value);
}

}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf
