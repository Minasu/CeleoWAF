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

#include "src/actions/transformations/parity_even_7bit.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include <cstring>

#include "celeowaf/transaction.h"
#include "src/actions/transformations/transformation.h"


namespace celeowaf {
namespace actions {
namespace transformations {


std::string ParityEven7bit::evaluate(const std::string &value,
    Transaction *transaction) {
    std::string ret;
    unsigned char *input;

    input = reinterpret_cast<unsigned char *>
        (malloc(sizeof(char) * value.length()+1));

    if (input == NULL) {
        return "";
    }

    std::memcpy(input, value.c_str(), value.length()+1);

    inplace(input, value.length());

    ret.assign(reinterpret_cast<char *>(input), value.length());
    free(input);

    return ret;
}

bool ParityEven7bit::inplace(unsigned char *input, uint64_t input_len) {
    uint64_t i;

    i = 0;
    while (i < input_len) {
        unsigned int x = input[i];

        input[i] ^= input[i] >> 4;
        input[i] &= 0xf;

        if ((0x6996 >> input[i]) & 1) {
            input[i] = x | 0x80;
        } else {
            input[i] = x & 0x7f;
        }
        i++;
    }

    return true;
}



}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf
