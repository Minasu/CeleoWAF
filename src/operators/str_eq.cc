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

#include "src/operators/str_eq.h"

#include <string>

namespace celeowaf {
namespace operators {

bool StrEq::evaluate(Transaction *transaction, const std::string &str) {
    std::string pt(m_string->evaluate(transaction));
    return !pt.compare(str);
}


}  // namespace operators
}  // namespace celeowaf
