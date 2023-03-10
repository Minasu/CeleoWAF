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

#ifndef HEADERS_CELEOWAF_DEBUG_LOG_H_
#define HEADERS_CELEOWAF_DEBUG_LOG_H_


#ifndef __cplusplus
typedef struct DebugLog_t DebugLog;
#endif

#ifdef __cplusplus

namespace celeowaf {
namespace debug_log {


/** @ingroup CeleoWAF_CPP_API */
class DebugLog {
 public:
    DebugLog()
        : m_debugLevel(-1),
        m_fileName("") { }

    virtual ~DebugLog();

    virtual void write(int level, const std::string &msg);
    virtual void write(int level, const std::string &id,
        const std::string &uri, const std::string &msg);
    virtual bool isLogFileSet();
    virtual bool isLogLevelSet();
    virtual void setDebugLogLevel(int level);
    virtual void setDebugLogFile(const std::string &fileName, std::string *error);
    virtual const std::string& getDebugLogFile();
    virtual int getDebugLogLevel();

    int m_debugLevel;
 private:
    std::string m_fileName;
};


}  // namespace debug_log
}  // namespace celeowaf
#endif

#endif  // HEADERS_CELEOWAF_DEBUG_LOG_H_
