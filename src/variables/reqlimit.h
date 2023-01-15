/*
 * CeleoWAF, http://www.celeowaf.org/
 * Copyright (c) 2023 - 2023 Celeonet SAS (https://www.celeonet.fr/)
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

#include <iostream>
#include <list>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#ifndef SRC_VARIABLES_REQLIMIT_H_
#define SRC_VARIABLES_REQLIMIT_H_

#include "src/variables/variable.h"
#include "src/run_time_string.h"

namespace celeowaf {

class Transaction;
namespace variables {


class ReqLimit_DictElement : public Variable {
 public:
    explicit ReqLimit_DictElement(const std::string &dictElement)
        : Variable("REQLIMIT:" + dictElement),
        m_dictElement("REQLIMIT:" + dictElement) { }

    void evaluate(Transaction *t,
        RuleWithActions *rule,
        std::vector<const VariableValue *> *l) override {
        t->m_collections.m_reqlimit_collection->countReqLimit(
            m_name, t->m_collections.m_reqlimit_collection_key,
            t->m_rules->m_secWebAppId.m_value, l);
    }

    std::string m_dictElement;
};


class ReqLimit_NoDictElement : public Variable {
 public:
    ReqLimit_NoDictElement()
        : Variable("REQLIMIT") { }

    void evaluate(Transaction *t,
        RuleWithActions *rule,
        std::vector<const VariableValue *> *l) override {
        t->m_collections.m_reqlimit_collection->resolveMultiMatches("",
            t->m_collections.m_reqlimit_collection_key,
            t->m_rules->m_secWebAppId.m_value, l, m_keyExclusion);
    }
};


class ReqLimit_DictElementRegexp : public VariableRegex {
 public:
    explicit ReqLimit_DictElementRegexp(const std::string &dictElement)
        : VariableRegex("REQLIMIT", dictElement),
        m_dictElement(dictElement) { }

    void evaluate(Transaction *t,
        RuleWithActions *rule,
        std::vector<const VariableValue *> *l) override {
        t->m_collections.m_reqlimit_collection->resolveRegularExpression(
            m_dictElement, t->m_collections.m_reqlimit_collection_key,
            t->m_rules->m_secWebAppId.m_value, l, m_keyExclusion);
    }

    std::string m_dictElement;
};


class ReqLimit_DynamicElement : public Variable {
 public:
    explicit ReqLimit_DynamicElement(std::unique_ptr<RunTimeString> dictElement)
        : Variable("REQLIMIT:dynamic"),
        m_string(std::move(dictElement)) { }

    void evaluate(Transaction *t,
        RuleWithActions *rule,
        std::vector<const VariableValue *> *l) override {
        std::string string = m_string->evaluate(t);
        t->m_collections.m_reqlimit_collection->resolveSingleMatch(
            string,
            t->m_collections.m_reqlimit_collection_key,
            t->m_rules->m_secWebAppId.m_value, l);
    }

    static void del(Transaction *t, const std::string &k) {
        t->m_collections.m_reqlimit_collection->del(k,
            t->m_collections.m_reqlimit_collection_key,
            t->m_rules->m_secWebAppId.m_value);
    }

    static void storeOrUpdateFirst(Transaction *t, const std::string &var,
        const std::string &value) {
        t->m_collections.m_reqlimit_collection->insertReqLimit(
            var, t->m_collections.m_reqlimit_collection_key,
            t->m_rules->m_secWebAppId.m_value,
            value);
    }

    std::unique_ptr<RunTimeString> m_string;
};


}  // namespace variables
}  // namespace celeowaf

#endif  // SRC_VARIABLES_REQLIMIT_H_
