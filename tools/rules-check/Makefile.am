

bin_PROGRAMS = cwaf-rules-check

cwaf_rules_check_SOURCES = \
        rules-check.cc

cwaf_rules_check_LDADD = \
	$(top_builddir)/src/.libs/libceleowaf.la \
	$(AMQP_LDADD) \
	$(CURL_LDADD) \
	$(GEOIP_LDADD) \
	$(MAXMIND_LDADD) \
	$(GLOBAL_LDADD) \
	$(LIBXML2_LDADD) \
	$(LUA_LDADD) \
	$(PCRE_LDADD) \
	$(SSDEEP_LDADD) \
	$(REDIS_LDADD) \
	$(YAJL_LDADD)

cwaf_rules_check_LDFLAGS = \
	$(AMQP_LDFLAGS) \
	$(GEOIP_LDFLAGS) \
	$(MAXMIND_LDFLAGS) \
	$(LDFLAGS) \
	$(LUA_LDFLAGS) \
	$(SSDEEP_LDFLAGS) \
	$(REDIS_LDFLAGS) \
	$(YAJL_LDFLAGS)

cwaf_rules_check_CPPFLAGS = \
	-std=c++11 \
	-I$(top_builddir)/headers \
	$(GLOBAL_CPPFLAGS) \
	$(AMQP_CFLAGS) \
	$(PCRE_CFLAGS) \
	$(MAXMIND_CFLAGS) \
	$(LIBXML2_CFLAGS) \
	$(REDIS_CFLAGS)

MAINTAINERCLEANFILES = \
        Makefile.in

