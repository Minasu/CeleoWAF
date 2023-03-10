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

#ifndef SRC_OPERATORS_VALIDATE_HASH_H_
#define SRC_OPERATORS_VALIDATE_HASH_H_

#include <string>
#include <memory>
#include <utility>

#include "src/operators/operator.h"


namespace celeowaf {
namespace operators {

class ValidateHash : public Operator {
 public:
    /** @ingroup CeleoWAF_Operator */
    explicit ValidateHash(std::unique_ptr<RunTimeString> param)
        : Operator("ValidateHash", std::move(param)) { }
    bool evaluate(Transaction *transaction, const std::string  &str) override;
};

}  // namespace operators
}  // namespace celeowaf


#endif  // SRC_OPERATORS_VALIDATE_HASH_H_
