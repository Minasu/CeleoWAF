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

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

#ifndef TEST_COMMON_CELEOWAF_TEST_RESULTS_H_
#define TEST_COMMON_CELEOWAF_TEST_RESULTS_H_

namespace celeowaf_test {

template <class T> class CeleoWAFTestResults : public std::vector<T *> {
 public:
    std::string log_raw_debug_log;
    int status;
    std::string location;
};

}  // namespace celeowaf_test

#endif  // TEST_COMMON_CELEOWAF_TEST_RESULTS_H_
