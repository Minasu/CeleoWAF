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

#include "src/actions/ctl/request_body_processor_xml.h"

#include <iostream>
#include <string>

#include "celeowaf/transaction.h"

namespace celeowaf {
namespace actions {
namespace ctl {


bool RequestBodyProcessorXML::evaluate(RuleWithActions *rule,
    Transaction *transaction) {
    transaction->m_requestBodyProcessor = Transaction::XMLRequestBody;
    transaction->m_variableReqbodyProcessor.set("XML",
        transaction->m_variableOffset);

    return true;
}


}  // namespace ctl
}  // namespace actions
}  // namespace celeowaf
