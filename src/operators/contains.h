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

#ifndef SRC_OPERATORS_CONTAINS_H_
#define SRC_OPERATORS_CONTAINS_H_

#include <string>
#include <list>
#include <memory>
#include <utility>

#include "celeowaf/transaction.h"
#include "celeowaf/rule_message.h"
#include "src/operators/operator.h"


namespace celeowaf {
namespace operators {

class Contains : public Operator {
 public:
    /** @ingroup CeleoWAF_Operator */
    explicit Contains(std::unique_ptr<RunTimeString> param)
        : Operator("Contains", std::move(param)) { }
    bool evaluate(Transaction *transaction, RuleWithActions *rule,
        const std::string &str,
        std::shared_ptr<RuleMessage> ruleMessage) override;
};

}  // namespace operators
}  // namespace celeowaf


#endif  // SRC_OPERATORS_CONTAINS_H_
