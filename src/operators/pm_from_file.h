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

#ifndef SRC_OPERATORS_PM_FROM_FILE_H_
#define SRC_OPERATORS_PM_FROM_FILE_H_

#include <string>
#include <memory>
#include <utility>

#include "src/operators/pm.h"


namespace celeowaf {
namespace operators {


class PmFromFile : public Pm {
 public:
    /** @ingroup CeleoWAF_Operator */
    explicit PmFromFile(std::unique_ptr<RunTimeString> param)
        : Pm("PmFromFile", std::move(param)) { }
    explicit PmFromFile(const std::string &n, std::unique_ptr<RunTimeString> param)
        : Pm(n, std::move(param)) { }

    bool init(const std::string &file, std::string *error) override;

private:
    static bool isComment(const std::string &s);
};


}  // namespace operators
}  // namespace celeowaf


#endif  // SRC_OPERATORS_PM_FROM_FILE_H_
