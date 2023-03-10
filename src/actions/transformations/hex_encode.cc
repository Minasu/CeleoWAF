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

#include "src/actions/transformations/hex_encode.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include <iterator>

#include "celeowaf/transaction.h"
#include "src/actions/transformations/transformation.h"


namespace celeowaf {
namespace actions {
namespace transformations {

HexEncode::HexEncode(const std::string &action) 
    : Transformation(action) {
    this->action_kind = 1;
}

std::string HexEncode::evaluate(const std::string &value,
    Transaction *transaction) {

    std::stringstream result;
    for (std::size_t i=0; i < value.length(); i++) {
        unsigned int ii = (unsigned char)(value[i]);
        result << std::setw(2) << std::setfill('0') << std::hex << ii;
    }

    return result.str();
}

}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf
