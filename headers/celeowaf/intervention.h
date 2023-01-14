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

#ifndef HEADERS_CELEOWAF_INTERVENTION_H_
#define HEADERS_CELEOWAF_INTERVENTION_H_

#ifdef __cplusplus
namespace celeowaf {
#endif

typedef struct CeleoWAFIntervention_t {
    int status;
    int pause;
    char *url;
    char *log;
    int disruptive;
} CeleoWAFIntervention;

#ifdef __cplusplus
namespace intervention {
    static void reset(CeleoWAFIntervention_t *i) {
        i->status = 200;
        i->pause = 0;
        i->disruptive = 0;
    }

    static void clean(CeleoWAFIntervention_t *i) {
        i->url = NULL;
        i->log = NULL;
        reset(i);
    }

    static void freeUrl(CeleoWAFIntervention_t *i) {
        if (i->url) {
            free(i->url);
            i->url = NULL;
        }
    }

    static void freeLog(CeleoWAFIntervention_t *i) {
        if (i->log) {
            free(i->log);
            i->log = NULL;
        }
    }

    static void free(CeleoWAFIntervention_t *i) {
        freeUrl(i);
        freeLog(i);
    }

}  // namespace intervention
#endif

#ifdef __cplusplus
}  // namespace celeowaf
#endif

#endif  // HEADERS_CELEOWAF_INTERVENTION_H_
