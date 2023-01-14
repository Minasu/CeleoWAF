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
#include "src/utils/string.h"

#ifndef SRC_UTILS_DECODE_H_
#define SRC_UTILS_DECODE_H_


namespace celeowaf {
namespace utils {


int urldecode_nonstrict_inplace(unsigned char *input,
    uint64_t input_len, int *invalid_count, int *changed);
std::string uri_decode(const std::string & sSrc);


}  // namespace utils
}  // namespace celeowaf

#endif  // SRC_UTILS_DECODE_H_
