

noinst_PROGRAMS = simple_request

simple_request_SOURCES = \
	simple_request.cc

simple_request_LDADD = \
	$(CURL_LDADD) \
	$(GEOIP_LDADD) \
	$(GLOBAL_LDADD) \
	$(LIBXML2_LDADD) \
	$(MAXMIND_LDADD) \
	$(LUA_LDADD) \
	$(PCRE_LDADD) \
	$(SSDEEP_LDADD) \
	$(REDIS_LDADD) \
	$(YAJL_LDADD)

simple_request_LDFLAGS = \
	-L$(top_builddir)/src/.libs/ \
	$(GEOIP_LDFLAGS) \
	-lceleowaf \
	-lpthread \
	-lm \
	-lstdc++ \
	$(LUA_LDFLAGS) \
	$(MAXMIND_LDFLAGS) \
	$(SSDEEP_LDFLAGS) \
	$(REDIS_LDFLAGS) \
	$(YAJL_LDFLAGS)

simple_request_CPPFLAGS = \
	$(GLOBAL_CFLAGS) \
	-std=c++11 \
	-I$(top_builddir)/headers \
	-I$(top_builddir) \
	-g \
	-I../others \
	-fPIC \
	-O3 \
	$(CURL_CFLAGS) \
	$(GEOIP_CFLAGS) \
	$(GLOBAL_CPPFLAGS) \
	$(CWAF_NO_LOGS) \
	$(YAJL_CFLAGS) \
	$(LUA_CFLAGS) \
	$(PCRE_CFLAGS) \
	$(REDIS_CFLAGS) \
	$(LIBXML2_CFLAGS)


MAINTAINERCLEANFILES = \
	Makefile.in


