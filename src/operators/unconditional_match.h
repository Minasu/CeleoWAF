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

#ifndef SRC_OPERATORS_UNCONDITIONAL_MATCH_H_
#define SRC_OPERATORS_UNCONDITIONAL_MATCH_H_

#include <string>
#include <list>

#include "celeowaf/transaction.h"
#include "src/operators/operator.h"

namespace celeowaf {
namespace operators {

class UnconditionalMatch : public Operator {
 public:
    /** @ingroup CeleoWAF_Operator */
    UnconditionalMatch()
        : Operator("UnconditionalMatch") { }

    bool evaluate(Transaction *transaction, const std::string &exp) override;
};

}  // namespace operators
}  // namespace celeowaf


#endif  // SRC_OPERATORS_UNCONDITIONAL_MATCH_H_
