

noinst_PROGRAMS = benchmark

benchmark_SOURCES = \
        benchmark.cc

benchmark_LDADD = \
	$(AMQP_LDADD) \
	$(CURL_LDADD) \
	$(GEOIP_LDADD) \
	$(MAXMIND_LDADD) \
	$(PCRE_LDADD) \
	$(YAJL_LDADD) \
	$(SSDEEP_LDADD) \
	$(LUA_LDADD) \
	$(LIBXML2_LDADD) \
	$(REDIS_LDADD) \
	$(GLOBAL_LDADD)

benchmark_LDFLAGS = \
	-L$(top_builddir)/src/.libs/ \
	$(AMQP_LDFLAGS) \
	$(GEOIP_LDFLAGS) \
	-lceleowaf \
	-lpthread \
	-lm \
	-lstdc++ \
	$(GEOIP_LDFLAGS) \
	$(MAXMIND_LDFLAGS) \
	$(YAJL_LDFLAGS) \
	$(SSDEEP_LDFLAGS) \
	$(LUA_LDFLAGS) \
	$(REDIS_LDFLAGS)

benchmark_CPPFLAGS = \
	-std=c++11 \
	-I$(top_builddir)/headers \
	$(GLOBAL_CPPFLAGS) \
	$(AMQP_CFLAGS) \
	$(PCRE_CFLAGS) \
	$(LIBXML2_CFLAGS) \
	$(REDIS_CFLAGS)

MAINTAINERCLEANFILES = \
        Makefile.in

