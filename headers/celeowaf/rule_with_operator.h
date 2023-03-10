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
#include <stack>
#include <vector>
#include <string>
#include <list>
#include <memory>
#include <utility>
#endif

#ifndef HEADERS_CELEOWAF_RULE_WITH_OPERATOR_H_
#define HEADERS_CELEOWAF_RULE_WITH_OPERATOR_H_

#include "celeowaf/transaction.h"
#include "celeowaf/celeowaf.h"
#include "celeowaf/variable_value.h"
#include "celeowaf/rule.h"
#include "celeowaf/rule_with_actions.h"

#ifdef __cplusplus

namespace celeowaf {


class RuleWithOperator : public RuleWithActions {
 public:
    RuleWithOperator(operators::Operator *op,
        variables::Variables *variables,
        std::vector<actions::Action *> *actions,
        Transformations *transformations,
        std::unique_ptr<std::string> fileName,
        int lineNumber);

    virtual ~RuleWithOperator();

    bool evaluate(Transaction *transaction,
        std::shared_ptr<RuleMessage> rm) override;

    void getVariablesExceptions(Transaction *t,
        variables::Variables *exclusion, variables::Variables *addition);
    inline void getFinalVars(variables::Variables *vars,
        variables::Variables *eclusion, Transaction *trans);

    bool executeOperatorAt(Transaction *trasn, const std::string &key,
        const std::string &value, std::shared_ptr<RuleMessage> rm);

    static void updateMatchedVars(Transaction *trasn, const std::string &key,
        const std::string &value);
    static void cleanMatchedVars(Transaction *trasn);


    std::string getOperatorName() const;

    virtual std::string getReference() override {
        return std::to_string(m_ruleId);
    }

 private:
    celeowaf::variables::Variables *m_variables;
    operators::Operator *m_operator;
};


}  // namespace celeowaf
#endif


#endif  // HEADERS_CELEOWAF_RULE_WITH_OPERATOR_H_
