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

#include <vector>
#include <string>
#include <list>
#include <utility>
#include <iostream>

#ifndef SRC_VARIABLES_CWAF_BUILD_H_
#define SRC_VARIABLES_CWAF_BUILD_H_

#include "src/variables/variable.h"
#include "celeowaf/celeowaf.h"

namespace celeowaf {

class Transaction;
namespace variables {

class CWafBuild : public Variable {
 public:
    explicit CWafBuild(const std::string &_name)
        : Variable(_name),
        m_retName("CWAF_BUILD") {
        std::ostringstream ss;
        ss << std::setw(2) << std::setfill('0') << CELEOWAF_MAJOR;
        ss << std::setw(2) << std::setfill('0') << CELEOWAF_MINOR;
        ss << std::setw(2) << std::setfill('0') << CELEOWAF_PATCHLEVEL;
        ss << std::setw(2) << std::setfill('0') << CELEOWAF_TAG_NUM;
        m_build = ss.str();
    }

    void evaluate(Transaction *transaction,
        RuleWithActions *rule,
        std::vector<const VariableValue *> *l) override;

    std::string m_build;
    std::string m_retName;
};


}  // namespace variables
}  // namespace celeowaf

#endif  // SRC_VARIABLES_CWAF_BUILD_H_
