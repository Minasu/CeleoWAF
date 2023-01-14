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

#include "src/variables/time_mon.h"

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <utility>

#include "celeowaf/transaction.h"

namespace celeowaf {
namespace variables {

void TimeMon::evaluate(Transaction *transaction,
    RuleWithActions *rule,
    std::vector<const VariableValue *> *l) {
    char tstr[200];
    struct tm timeinfo;
    time_t timer;

    time(&timer);
    memset(tstr, '\0', 200);

    localtime_r(&timer, &timeinfo);
    strftime(tstr, 200, "%m", &timeinfo);
    int a = atoi(tstr);
    a--;

    transaction->m_variableTimeMin.assign(std::to_string(a));

    l->push_back(new VariableValue(&m_retName,
        &transaction->m_variableTimeMin));
}


}  // namespace variables
}  // namespace celeowaf
