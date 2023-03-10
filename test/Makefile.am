
if AFL_FUZZER
export MAYBE_AFL_FUZZER = fuzzer
endif


SUBDIRS = \
	benchmark \
	$(MAYBE_AFL_FUZZER)


# make clean
CLEANFILES = 

# make maintainer-clean
MAINTAINERCLEANFILES = \
	Makefile.in


bin_PROGRAMS =
noinst_PROGRAMS =

EXTRA_DIST = \
	test-cases/* \
	custom-test-driver \
	test-suite.sh


# unit_tests

noinst_PROGRAMS += unit_tests
unit_tests_SOURCES = \
        unit/unit.cc \
        unit/unit_test.cc


noinst_HEADERS = \
       common/celeowaf_test.cc \
       common/*.h \
       unit/*.h \
       regression/*.h


unit_tests_LDADD = \
	$(AMQP_LDADD) \
	$(CURL_LDADD) \
	$(GEOIP_LDADD) \
	$(MAXMIND_LDADD) \
	$(GLOBAL_LDADD) \
	$(LIBXML2_LDADD) \
	$(LUA_LDADD) \
	$(PCRE_LDADD) \
	$(PCRE2_LDADD) \
	$(SSDEEP_LDADD) \
	$(REDIS_LDADD) \
	$(YAJL_LDADD)


unit_tests_LDFLAGS = \
	-L$(top_builddir)/src/.libs/ \
	$(AMQP_LDFLAGS) \
	$(GEOIP_LDFLAGS) \
	-lceleowaf \
	-lpthread \
	-lm \
	-lstdc++ \
	$(MAXMIND_LDFLAGS) \
	$(LUA_LDFLAGS) \
	$(SSDEEP_LDFLAGS) \
	$(REDIS_LDFLAGS) \
	$(YAJL_LDFLAGS)


unit_tests_CPPFLAGS = \
	-std=c++11 \
	-Icommon \
	-I../ \
	-g \
	-I$(top_builddir)/headers \
	$(AMQP_CFLAGS) \
	$(CURL_CFLAGS) \
	$(CWAF_NO_LOGS) \
	$(GEOIP_CFLAGS) \
	$(MAXMIND_CFLAGS) \
	$(GLOBAL_CPPFLAGS) \
	$(PCRE_CFLAGS) \
	$(PCRE2_CFLAGS) \
	$(YAJL_CFLAGS) \
	$(LUA_CFLAGS) \
	$(SSDEEP_CFLAGS) \
	$(REDIS_CFLAGS) \
	$(LIBXML2_CFLAGS)


# regression

noinst_PROGRAMS += regression_tests
regression_tests_SOURCES = \
        regression/regression.cc \
        regression/regression_test.cc \
        regression/custom_debug_log.cc

regression_tests_LDADD = \
	$(AMQP_LDADD) \
	$(CURL_LDADD) \
	$(GEOIP_LDADD) \
	$(MAXMIND_LDADD) \
	$(GLOBAL_LDADD) \
	$(LIBXML2_LDADD) \
	$(LUA_LDADD) \
	$(PCRE_LDADD) \
	$(PCRE2_LDADD) \
	$(SSDEEP_LDADD) \
	$(REDIS_LDADD) \
	$(YAJL_LDADD)


regression_tests_LDFLAGS = \
	-L$(top_builddir)/src/.libs/ \
	$(AMQP_LDFLAGS) \
	$(GEOIP_LDFLAGS) \
	-lceleowaf \
	-lpthread \
	-lm \
	-lstdc++ \
	$(MAXMIND_LDFLAGS) \
	$(YAJL_LDFLAGS) \
	$(SSDEEP_LDFLAGS) \
	$(LUA_LDFLAGS) \
	$(REDIS_LDFLAGS)


regression_tests_CPPFLAGS = \
	-std=c++11 \
	-Icommon \
	-I../ \
	-g \
	-I$(top_builddir)/headers \
	$(AMQP_CFLAGS) \
	$(CURL_CFLAGS) \
	$(CWAF_NO_LOGS) \
	$(GEOIP_CFLAGS) \
	$(MAXMIND_CFLAGS) \
	$(GLOBAL_CPPFLAGS) \
	$(LUA_CFLAGS) \
	$(SSDEEP_CFLAGS) \
	$(PCRE_CFLAGS) \
	$(PCRE2_CFLAGS) \
	$(YAJL_CFLAGS) \
	$(LIBXML2_CFLAGS) \
	$(REDIS_CFLAGS)


# optimization


noinst_PROGRAMS += rules_optimization
rules_optimization_SOURCES = \
        optimization/optimization.cc

rules_optimization_LDADD = \
	$(AMQP_LDADD) \
	$(CURL_LDADD) \
	$(GEOIP_LDADD) \
	$(MAXMIND_LDADD) \
	$(GLOBAL_LDADD) \
	$(LIBXML2_LDADD) \
	$(LUA_LDADD) \
	$(PCRE_LDADD) \
	$(PCRE2_LDADD) \
	$(SSDEEP_LDADD) \
	$(REDIS_LDADD) \
	$(YAJL_LDADD)

rules_optimization_LDFLAGS = \
	-L$(top_builddir)/src/.libs/ \
	$(AMQP_LDFLAGS) \
	$(GEOIP_LDFLAGS) \
	-lceleowaf \
	-lpthread \
	-lm \
	-lstdc++ \
	$(MAXMIND_LDFLAGS) \
	$(LUA_LDFLAGS) \
	$(SSDEEP_LDFLAGS) \
	$(REDIS_LDFLAGS) \
	$(YAJL_LDFLAGS)

rules_optimization_CPPFLAGS = \
	-std=c++11 \
	-Icommon \
	-I../ \
	-g \
	-I$(top_builddir)/headers \
	$(AMQP_CFLAGS) \
	$(CURL_CFLAGS) \
	$(CWAF_NO_LOGS) \
	$(GEOIP_CFLAGS) \
	$(MAXMIND_CFLAGS) \
	$(GLOBAL_CPPFLAGS) \
	$(LUA_CFLAGS) \
	$(SSDEEP_CFLAGS) \
	$(PCRE_CFLAGS) \
	$(PCRE2_CFLAGS) \
	$(YAJL_CFLAGS) \
	$(REDIS_CFLAGS) \
	$(LIBXML2_CFLAGS)

