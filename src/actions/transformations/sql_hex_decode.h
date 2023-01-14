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

#include <string>

#include "celeowaf/actions/action.h"
#include "src/actions/transformations/transformation.h"

#ifndef SRC_ACTIONS_TRANSFORMATIONS_SQL_HEX_DECODE_H_
#define SRC_ACTIONS_TRANSFORMATIONS_SQL_HEX_DECODE_H_

#ifdef __cplusplus
namespace celeowaf {
class Transaction;

namespace actions {
namespace transformations {

class SqlHexDecode : public Transformation {
 public:
    explicit SqlHexDecode(const std::string &action)  : Transformation(action) { }

    std::string evaluate(const std::string &exp,
        Transaction *transaction) override;

    static int inplace(unsigned char *data, int len);

    static int mytolower(int ch) {
        if (ch >= 'A' && ch <= 'Z')
            return ('a' + ch - 'A');
        else
            return ch;
    }
};

}  // namespace transformations
}  // namespace actions
}  // namespace celeowaf

#endif

#endif  // SRC_ACTIONS_TRANSFORMATIONS_SQL_HEX_DECODE_H_
