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
#include <string>
#include <mutex>
#endif

#ifndef SRC_UNIQUE_ID_H_
#define SRC_UNIQUE_ID_H_


#ifdef __cplusplus

namespace celeowaf {

#define MAC_ADDRESS_SIZE 19
#define MAX_MACHINE_NAME_SIZE 256

/** @ingroup CeleoWAF_CPP_API */
class UniqueId {
 public:
    static UniqueId& getInstance() {
        static UniqueId instance;
        return instance;
    }

    static std::string uniqueId() {
        std::call_once(UniqueId::onceFlag,[]() {
            UniqueId::getInstance().fillUniqueId();
        });

        return UniqueId::getInstance().uniqueId_str;
    }

    void fillUniqueId();
    static std::string machineName();
    static std::string ethernetMacAddress();

    std::string uniqueId_str;

 private:
    UniqueId() {}
    // C++ 03
    UniqueId(UniqueId const&);
    // void operator=(UniqueId const&);

    // C++ 11
    // UniqueId(UniqueId const&) = delete;
    // void operator=(UniqueId const&) = delete;

    static std::once_flag onceFlag;
};

}  // namespace celeowaf
#endif

#endif  // SRC_UNIQUE_ID_H_
