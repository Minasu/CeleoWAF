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

#include <ctime>
#include <iostream>
#include <string>
#include <vector>

#include "celeowaf/celeowaf.h"

#ifndef SRC_UTILS_RANDOM_H_
#define SRC_UTILS_RANDOM_H_


namespace celeowaf {
namespace utils {


    double random_number(const double from, const double to);
    double generate_transaction_unique_id();


}  // namespace utils
}  // namespace celeowaf


#endif  // SRC_UTILS_RANDOM_H_
