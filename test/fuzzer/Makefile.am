

# make clean
CLEANFILES = 

# make maintainer-clean
MAINTAINERCLEANFILES = \
	Makefile.in


noinst_PROGRAMS = afl_fuzzer

afl_fuzzer_SOURCES = \
	afl_fuzzer.cc

afl_fuzzer_LDADD = \
	$(AMQP_LDFLAGS) $(AMQP_LDADD) \
	$(GLOBAL_LDADD) \
	$(CURL_LDADD) \
	$(GEOIP_LDFLAGS) $(GEOIP_LDADD) \
	$(PCRE_LDADD) \
	$(YAJL_LDFLAGS) $(YAJL_LDADD) \
	$(MAXMIND_LDFLAGS) $(MAXMIND_LDADD) \
	$(SSDEEP_LDFLAGS) $(SSDEEP_LDADD) \
	$(LUA_LDFLAGS) $(LUA_LDADD) \
	$(LIBXML2_LDADD) \
	$(REDIS_LDFLAGS) $(REDIS_LDADD) \
	$(top_builddir)/src/.libs/libceleowaf.a \
	$(top_builddir)/others/libinjection.la \
	$(top_builddir)/others/libmbedtls.la


afl_fuzzer_CPPFLAGS = \
	-std=c++11 \
	-Icommon \
	-I../ \
	-I../../ \
	-O0 \
	-g \
	-I$(top_builddir)/headers \
	$(AMQP_CFLAGS) \
	$(CURL_CFLAGS) \
	$(GEOIP_CFLAGS) \
	$(MAXMIND_CFLAGS) \
	$(GLOBAL_CPPFLAGS) \
	$(CWAF_NO_LOGS) \
	$(YAJL_CFLAGS) \
	$(PCRE_CFLAGS) \
	$(LIBXML2_CFLAGS) \
	$(REDIS_CFLAGS)
