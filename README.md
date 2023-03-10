CeleoWAF

Libceleowaf is one component of the CeleoWAF v3 project. The library
codebase serves as an interface to CeleoWAF Connectors taking in web traffic
and applying traditional CeleoWAF processing. In general, it provides the
capability to load/interpret rules written in the CeleoWAF SecRules format
and apply them to HTTP content provided by your application via Connectors.

# Compilation

Before starting the compilation process, make sure that you have all the
dependencies in place. Read the subsection “Dependencies”  for further
information.

After the compilation make sure that there are no issues on your
build/platform. We strongly recommend the utilization of the unit tests and
regression tests. These test utilities are located under the subfolder ‘tests’.

As a dynamic library, don’t forget that libceleowaf must be installed to a location (folder) where you OS will be looking for dynamic libraries.



### Unix (Linux, MacOS, FreeBSD, …)

On unix the project uses autotools to help the compilation process.

```shell
$ ./build.sh
$ ./configure
$ make
$ sudo make install
```

## Dependencies

This library is written in C++ using the C++11 standards. It also uses Flex
and Yacc to produce the “Sec Rules Language” parser. Other, mandatory dependencies include YAJL, as CeleoWAF uses JSON for producing logs and its testing framework, libpcre (not yet mandatory) for processing regular expressions in SecRules, and libXML2 (not yet mandatory) which is used for parsing XML requests.

All others dependencies are related to operators specified within SecRules or configuration directives and may not be required for compilation. A short list of such dependencies is as follows:

* libinjection is needed for the operator @detectXSS and @detectSQL
* curl is needed for the directive SecRemoteRules.

If those libraries are missing CeleoWAF will be compiled without the support for the operator @detectXSS and the configuration directive SecRemoteRules.

# Library documentation

The library documentation is written within the code in Doxygen format. To generate this documentation, please use the doxygen utility with the provided configuration file, “doxygen.cfg”, located with the "doc/" subfolder. This will generate HTML formatted documentation including usage examples.

# Library utilization

The library provides a C++ and C interface. Some resources are currently only
available via the C++ interface, for instance, the capability to create custom logging
mechanism (see the regression test to check for how those logging mechanism works).
The objective is to have both APIs (C, C++) providing the same functionality,
if you find an aspect of the API that is missing via a particular interface, please open an issue.

Inside the subfolder examples, there are simple examples on how to use the API.
Below some are illustrated:

###  Simple example using C++

```c++
using CeleoWAF::CeleoWAF;
using CeleoWAF::Rules;
using CeleoWAF::Transaction;

CeleoWAF *cwaf;
CeleoWAF::Rules *rules;

cwaf = new CeleoWAF();

rules = new Rules();

rules->loadFromUri(rules_file);

Transaction *cwafTransaction = new Transaction(cwaf, rules);

cwafTransaction->processConnection("127.0.0.1");
if (cwafTransaction->intervention()) {
   std::cout << "There is an intervention" << std::endl;
}
```

### Simple example using C

```c
#include "celeowaf/celeowaf.h"
#include "celeowaf/transaction.h"


char main_rule_uri[] = "basic_rules.conf";

int main (int argc, char **argv)
{
    CeleoWAF *cwaf = NULL;
    Transaction *transaction = NULL;
    Rules *rules = NULL;

    cwaf = msc_init();

    rules = msc_create_rules_set();
    msc_rules_add_file(rules, main_rule_uri);

    transaction = msc_new_transaction(cwaf, rules);

    msc_process_connection(transaction, "127.0.0.1");
    msc_process_uri(transaction, "http://www.celeowaf.org/test?key1=value1&key2=value2&key3=value3&test=args&test=test");
    msc_process_request_headers(transaction);
    msc_process_request_body(transaction);
    msc_process_response_headers(transaction);
    msc_process_response_body(transaction);

    return 0;
}

```

# Contributing

You are more than welcome to contribute to this project and look forward to growing the community around this new version of CeleoWAF. Areas of interest include: New
functionalities, fixes, bug report, support for beginning users, or anything that you
are willing to help with.

## Providing patches

We prefer to have your patch within the GitHub infrastructure to facilitate our
review work, and our Q.A. integration. GitHub provides excellent
documentation on how to perform “Pull Requests”, more information available
here: https://help.github.com/articles/using-pull-requests/

Please respect the coding style. Pull requests can include various commits, so
provide one fix or one piece of functionality per commit. Please do not change anything outside
the scope of your target work (e.g. coding style in a function that you have
passed by). For further information about the coding style used in this
project, please check: https://www.chromium.org/blink/coding-style

Provides explanative commit messages. Your first line should  give the highlights of your
patch, 3rd and on give a more detailed explanation/technical details about your
patch. Patch explanation is valuable during the review process.

### Don’t know where to start?

Within our code there are various items marked as TODO or FIXME that may need
your attention. Check the list of items by performing a grep:

```
$ cd /path/to/celeowaf-nginx
$ egrep -Rin "TODO|FIXME" -R *
```

A TODO list is also available as part of the Doxygen documentation.

### Testing your patch

Along with the manual testing, we strongly recommend you to use the our
regression tests and unit tests. If you have implemented an operator, don’t
forget to create unit tests for it. If you implement anything else, it is encouraged that you develop complimentary regression tests for it.

The regression test and unit test utilities are native and do not demand any
external tool or script, although you need to fetch the test cases from other
repositories, as they are shared with other versions of CeleoWAF, those
others repositories git submodules. To fetch the submodules repository and run
the utilities, follow the commands listed below:

```shell
$ cd /path/to/your/CeleoWAF
$ git submodule foreach git pull
$ cd test
$ ./regression-tests
$ ./unit-tests
 ```

### Debugging


Before start the debugging process, make sure of where your bug is. The problem
could be on your connector or in libceleowaf. In order to identify where the
bug is, it is recommended that you develop a regression test that mimics the
scenario where the bug is happening. If the bug is reproducible with the
regression-test utility, then it will be far simpler to debug and ensure that it never occurs again. On Linux it is
recommended that anyone undertaking debugging utilize gdb and/or valgrind as needed.

During the configuration/compilation time, you may want to disable the compiler
optimization making your “back traces” populated with readable data. Use the
CFLAGS to disable the compilation optimization parameters:

```shell
$ export CFLAGS="-g -O0"
$ ./build.sh
$ ./configure
$ make
$ sudo make install
```


## Reporting Issues

If you are facing a configuration issue or something is not working as you
expected to be, please use the CeleoWAF user’s mailing list. Issues on GitHub
are also welcomed, but we prefer to have user ask questions on the mailing list first so that you can reach an entire community. Also don’t forget to look for existing issues before open a new one.

If you are going to open a new issue on GitHub, don’t forget to tell us the
version of your libceleowaf and the version of a specific connector if there
is one.


### Security issue

Please do not make public any security issue. Contact us at:
security@celeowaf.org reporting the issue. Once the problem is fixed your
credit will be given.

## Feature request

We are open to discussing any new feature request with the community via the mailing lists. You can alternativly,
feel free to open GitHub issues requesting new features. Before opening a
new issue, please check if there is one already opened on the same topic.

## Packaging

Having our packages in distros on time is a desire that we have, so let us know
if there is anything we can do to facilitate your work as a packager.

## Sponsor Note

Development of CeleoWAF is forked of ModSecurity
