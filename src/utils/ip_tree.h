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
#include <fstream>
#include <string>
#include <functional>

#ifndef SRC_UTILS_IP_TREE_H_
#define SRC_UTILS_IP_TREE_H_

#include "celeowaf/transaction.h"
#include "src/utils/msc_tree.h"

namespace celeowaf {
namespace Utils {


class IpTree {
 public:
    IpTree();
    ~IpTree();

    bool contains(const std::string &ip);
    void postOrderTraversal(TreeNode *node);
    bool addFromBuffer(std::istream *ss, std::string *error);
    bool addFromBuffer(const std::string& buffer, std::string *error);
    bool addFromFile(const std::string& file, std::string *error);
    bool addFromUrl(const std::string& url, std::string *error);
 private:
    TreeRoot *m_tree;
};


}  // namespace Utils
}  // namespace celeowaf

#endif  // SRC_UTILS_IP_TREE_H_
