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

#include <string.h>

#include <ctime>
#include <iostream>
#include <string>

#include "celeowaf/rules_set.h"
#include "celeowaf/celeowaf.h"

using celeowaf::Transaction;

char request_uri[] = "/test.pl?param1=test&para2=test2";

unsigned char response_body[] = "" \
    "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n\r" \
    "<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" " \
    "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" " \
    "xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">\n\r" \
    "  <soap:Body>\n\r" \
    "  <EnlightenResponse xmlns=\"http://clearforest.com/\">\n\r" \
    "  <EnlightenResult>string</EnlightenResult>\n\r" \
    "  </EnlightenResponse>\n\r" \
    "  </soap:Body>\n\r" \
    "</soap:Envelope>\n\r";

char ip[] = "200.249.12.31";

char rules_file[] = "basic_rules.conf";

const char* const help_message = "Usage: benchmark [num_iterations|-h|-?|--help]";

int main(int argc, char *argv[]) {

    unsigned long long NUM_REQUESTS(1000000);

    if (argc > 1) {
        if (0 == strcmp(argv[1], "-h") ||
            0 == strcmp(argv[1], "-?") ||
            0 == strcmp(argv[1], "--help")) {
            std::cout << help_message << std::endl;
            return 0;
        }
        errno = 0;
        unsigned long long upper = strtoull(argv[1], 0, 10);
        if (!errno && upper) {
            NUM_REQUESTS = upper;
        } else {
            if (errno) {
                perror("Invalid number of iterations");
            } else {
                std::cerr << "Failed to convert '" << argv[1] << "' to integer value" << std::endl
                          << help_message << std::endl;
                return -1;
            }
        }
    }
    std::cout << "Doing " << NUM_REQUESTS << " transactions...\n";
    celeowaf::CeleoWAF *cwaf;
    celeowaf::RulesSet *rules;
    celeowaf::CeleoWAFIntervention it;
    celeowaf::intervention::reset(&it);
    cwaf = new celeowaf::CeleoWAF();
    cwaf->setConnectorInformation("CeleoWAF-benchmark v0.0.1-alpha" \
            " (CeleoWAF benchmark utility)");

    rules = new celeowaf::RulesSet();
    if (rules->loadFromUri(rules_file) < 0) {
        std::cout << "Problems loading the rules..." << std::endl;
        std::cout << rules->m_parserError.str() << std::endl;
        return -1;
    }

    for (unsigned long long i = 0; i < NUM_REQUESTS; i++) {
        //std::cout << "Proceeding with request " << i << std::endl;

        Transaction *cwafTransaction = new Transaction(cwaf, rules, NULL);
        cwafTransaction->processConnection(ip, 12345, "127.0.0.1", 80);

        if (cwafTransaction->intervention(&it)) {
            std::cout << "There is an intervention" << std::endl;
            goto next_request;
        }
        cwafTransaction->processURI(request_uri, "GET", "1.1");
        if (cwafTransaction->intervention(&it)) {
            std::cout << "There is an intervention" << std::endl;
            goto next_request;
        }

        cwafTransaction->addRequestHeader("Host",
            "net.tutsplus.com");
        cwafTransaction->addRequestHeader("User-Agent",
            "Mozilla/5.0 (Windows; U; Windows NT 6.1; en-US; rv:1.9.1.5) " \
            "Gecko/20091102 Firefox/3.5.5 (.NET CLR 3.5.30729)");
        cwafTransaction->addRequestHeader("Accept",
            "text/html,application/xhtml+xml,application/xml;" \
            "q=0.9,*/*;q=0.8");
        cwafTransaction->addRequestHeader("Accept-Language",
            "en-us,en;q=0.5");
        cwafTransaction->addRequestHeader("Accept-Encoding",
            "gzip,deflate");
        cwafTransaction->addRequestHeader("Accept-Charset",
            "ISO-8859-1,utf-8;q=0.7,*;q=0.7");
        cwafTransaction->addRequestHeader("Keep-Alive",
            "300");
        cwafTransaction->addRequestHeader("Connection",
            "keep-alive");
        cwafTransaction->addRequestHeader("Cookie",
            "PHPSESSID=r2t5uvjq435r4q7ib3vtdjq120");
        cwafTransaction->addRequestHeader("Pragma",
            "no-cache");
        cwafTransaction->addRequestHeader("Cache-Control",
            "no-cache");
        cwafTransaction->processRequestHeaders();

        if (cwafTransaction->intervention(&it)) {
            std::cout << "There is an intervention" << std::endl;
            goto next_request;
        }


        cwafTransaction->processRequestBody();

        if (cwafTransaction->intervention(&it)) {
            std::cout << "There is an intervention" << std::endl;
            goto next_request;
        }

        cwafTransaction->addResponseHeader("HTTP/1.1",
            "200 OK");
        cwafTransaction->addResponseHeader("Content-Type",
            "text/xml; charset=utf-8");
        cwafTransaction->addResponseHeader("Content-Length",
            "200");

        cwafTransaction->processResponseHeaders(200, "HTTP 1.2");

        if (cwafTransaction->intervention(&it)) {
            std::cout << "There is an intervention" << std::endl;
            goto next_request;
        }


        cwafTransaction->appendResponseBody(response_body,
            strlen((const char*)response_body));
        cwafTransaction->processResponseBody();

        if (cwafTransaction->intervention(&it)) {
            std::cout << "There is an intervention" << std::endl;
            goto next_request;
        }

next_request:
        cwafTransaction->processLogging();
        delete cwafTransaction;
    }

    delete rules;
    delete cwaf;
}
