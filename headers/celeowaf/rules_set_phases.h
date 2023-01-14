
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

#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#endif


#ifndef HEADERS_CELEOWAF_RULES_SET_PHASES_H_
#define HEADERS_CELEOWAF_RULES_SET_PHASES_H_

#include "celeowaf/rules.h"

#ifdef __cplusplus

namespace celeowaf {
class RuleWithOperator;
namespace Parser {
class Driver;
}

/** @ingroup CeleoWAF_CPP_API */
class RulesSetPhases {
 public:

    bool insert(std::shared_ptr<Rule> rule);

    int append(RulesSetPhases *from, std::ostringstream *err);
    void dump() const;

    Rules *operator[](int index) { return &m_rulesAtPhase[index]; }
    Rules *at(int index) { return &m_rulesAtPhase[index]; }

 private:
    Rules m_rulesAtPhase[8];

};


}  // namespace celeowaf
#endif

#endif  // HEADERS_CELEOWAF_RULES_SET_PHASES_H_