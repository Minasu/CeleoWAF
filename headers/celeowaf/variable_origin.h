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

#ifdef __cplusplus
#include <string>
#endif

#ifndef HEADERS_CELEOWAF_VARIABLE_ORIGIN_H_
#define HEADERS_CELEOWAF_VARIABLE_ORIGIN_H_


#ifndef __cplusplus
typedef struct DebugLog_t DebugLog;
#endif

#ifdef __cplusplus

namespace celeowaf {


/** @ingroup CeleoWAF_CPP_API */
class VariableOrigin {
 public:
    VariableOrigin()
        : m_length(0),
        m_offset(0) { }

    std::string toText() {
        std::string offset = std::to_string(m_offset);
        std::string len = std::to_string(m_length);
        return "v" + offset + "," + len;
    }

    int m_length;
    size_t m_offset;
};


}  // namespace celeowaf
#endif

#endif  // HEADERS_CELEOWAF_VARIABLE_ORIGIN_H_


