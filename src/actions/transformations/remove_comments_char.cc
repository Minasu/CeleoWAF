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

#include "src/actions/transformations/remove_comments_char.h"

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

RemoveCommentsChar::RemoveCommentsChar(const std::string &action) 
    : Transformation(action) {
    this->action_kind = 1;
}

std::string RemoveCommentsChar::evaluate(const std::string &val,
    Transaction *transaction) {
    int64_t i;
    std::string value(val);

    i = 0;
    while (i < value.size()) {
        if (value.at(i) == '/'
            && (i+1 < value.size()) && value.at(i+1) == '*') {
            value.erase(i, 2);
        } else if (value.at(i) == '*'
            && (i+1 < value.size()) && value.at(i+1) == '/') {
            value.erase(i, 2);
        } else if (value.at(i) == '<'
            && (i+1 < value.size())
            && value.at(i+1) == '!'
            && (i+2 < value.size())
            && value.at(i+2) == '-'
            && (i+3 < value.size())
            && value.at(i+3) == '-') {
            value.erase(i, 4);
        } else if (value.at(i) == '-'
            && (i+1 < value.size()) && value.at(i+1) == '-'
            && (i+2 < value.size()) && value.at(i+2) == '>') {
            value.erase(i, 3);
        } else if (value.at(i) == '-'
            && (i+1 < value.size()) && value.at(i+1) == '-') {
            value.erase(i, 2);
        } else if (value.at(i) == '#') {
            value.erase(i, 1);
        } else {
            i++;
        }
    }
    return value;
}

}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf

