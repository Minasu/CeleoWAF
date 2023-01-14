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

#include <sstream>
#include <string>

#include "celeowaf/debug_log.h"

#ifndef TEST_REGRESSION_CUSTOM_DEBUG_LOG_H_
#define TEST_REGRESSION_CUSTOM_DEBUG_LOG_H_

namespace celeowaf_test {

class CustomDebugLog : public celeowaf::debug_log::DebugLog {
 public:
    CustomDebugLog *new_instance();
    ~CustomDebugLog();

    void write(int level, const std::string& message) override;
    void write(int level, const std::string &id,
        const std::string &uri, const std::string &msg) override;
    bool const contains(const std::string& pattern) const;
    std::string const log_messages() const;
    std::string error_log_messages();
    int getDebugLogLevel() override;

 private:
    std::stringstream m_log;
};

}  // namespace celeowaf_test

#endif  // TEST_REGRESSION_CUSTOM_DEBUG_LOG_H_
