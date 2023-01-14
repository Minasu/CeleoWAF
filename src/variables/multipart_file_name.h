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

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <utility>

#ifndef SRC_VARIABLES_MULTIPART_FILE_NAME_H_
#define SRC_VARIABLES_MULTIPART_FILE_NAME_H_

#include "src/variables/variable.h"

namespace celeowaf {

class Transaction;
namespace variables {


DEFINE_VARIABLE_DICT(MultiPartFileName, MULTIPART_FILENAME,
    m_variableMultipartFileName)


}  // namespace variables
}  // namespace celeowaf

#endif  // SRC_VARIABLES_MULTIPART_FILE_NAME_H_

