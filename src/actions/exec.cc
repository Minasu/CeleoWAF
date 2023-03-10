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

#include "src/actions/exec.h"

#include <iostream>
#include <string>

#include "celeowaf/rules_set.h"
#include "celeowaf/actions/action.h"
#include "celeowaf/transaction.h"
#include "celeowaf/rule.h"
#include "src/utils/system.h"
#include "src/engine/lua.h"


namespace celeowaf {
namespace actions {


bool Exec::init(std::string *error) {
    std::string err;

    m_script = utils::find_resource(m_parser_payload, "", &err);

    if (m_script.size() == 0) {
        error->assign("exec: Script not found: " + err);
        return false;
    }

    if (engine::Lua::isCompatible(m_script, &m_lua, &err) == false) {
        error->assign("exec: " + err);
        return false;
    }

    return true;
}


bool Exec::evaluate(RuleWithActions *rule, Transaction *t) {
    ms_dbg_a(t, 8, "Running script... " + m_script);
    m_lua.run(t);
    return true;
}


}  // namespace actions
}  // namespace celeowaf
