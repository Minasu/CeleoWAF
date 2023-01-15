dnl Check for REDIS Libraries
dnl CHECK_REDIS(ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND])

AC_DEFUN([PROG_REDIS], [

# Possible names for the redis library/package (pkg-config)
REDIS_POSSIBLE_LIB_NAMES="hiredis"

# Possible extensions for the library
REDIS_POSSIBLE_EXTENSIONS="so so0 la sl dll dylib so.0.0.0"

# Possible paths (if pkg-config was not found, proceed with the file lookup)
REDIS_POSSIBLE_PATHS="/usr/lib /usr/local/lib /usr/local/libredis /usr/local/redis /usr/local /opt/libredis /opt/redis /opt /usr /usr/lib64 /opt/local"

# Variables to be set by this very own script.
REDIS_VERSION=""
REDIS_CFLAGS=""
REDIS_CPPFLAGS=""
REDIS_LDADD=""
REDIS_LDFLAGS=""

AC_ARG_WITH(
    redis,
    [AS_HELP_STRING([--with-redis=PATH],[Path to redis prefix or config script])]
)

if test "x${with_redis}" == "xno"; then
    AC_DEFINE(HAVE_REDIS, 0, [Support for REDIS was disabled by the utilization of --without-redis or --with-redis=no])
    AC_MSG_NOTICE([Support for REDIS was disabled by the utilization of --without-redis or --with-redis=no])
    REDIS_DISABLED=yes
else
    if test "x${with_redis}" == "xyes"; then
        REDIS_MANDATORY=yes
        AC_MSG_NOTICE([REDIS support was marked as mandatory by the utilization of --with-redis=yes])
    fi
#        for x in ${REDIS_POSSIBLE_LIB_NAMES}; do
#            CHECK_FOR_REDIS_AT(${x})
#            if test -n "${REDIS_VERSION}"; then
#                break
#            fi
#        done

#    if test "x${with_redis}" != "xyes" or test "x${with_redis}" == "xyes"; then
        if test "x${with_redis}" == "x" || test "x${with_redis}" == "xyes"; then
            # Nothing about REDIS was informed, using the pkg-config to figure things out.
            if test -n "${PKG_CONFIG}"; then
                REDIS_PKG_NAME=""
                for x in ${REDIS_POSSIBLE_LIB_NAMES}; do
                    if ${PKG_CONFIG} --exists ${x}; then
                        REDIS_PKG_NAME="$x"
                        break
                    fi
                done
            fi
            AC_MSG_NOTICE([Nothing about REDIS was informed during the configure phase. Trying to detect it on the platform...])
            if test -n "${REDIS_PKG_NAME}"; then
                # Package was found using the pkg-config scripts
                REDIS_VERSION="`${PKG_CONFIG} ${REDIS_PKG_NAME} --modversion`"
                REDIS_CFLAGS="`${PKG_CONFIG} ${REDIS_PKG_NAME} --cflags`"
                REDIS_LDADD="`${PKG_CONFIG} ${REDIS_PKG_NAME} --libs-only-l`"
                REDIS_LDFLAGS="`${PKG_CONFIG} ${REDIS_PKG_NAME} --libs-only-L --libs-only-other`"
                REDIS_DISPLAY="${REDIS_LDADD}, ${REDIS_CFLAGS}"
            else
                # If pkg-config did not find anything useful, go over file lookup.
                for x in ${REDIS_POSSIBLE_PATHS}; do
                    CHECK_FOR_REDIS_AT(${x})
                    if test -n "${REDIS_VERSION}"; then
                        break
                    fi
                done
            fi
        fi
        if test "x${with_redis}" != "x"; then
            # An specific path was informed, lets check.
            REDIS_MANDATORY=yes
            CHECK_FOR_REDIS_AT(${with_redis})
        fi
#    fi
fi

if test -z "${REDIS_LDADD}"; then
    if test -z "${REDIS_MANDATORY}"; then
        if test -z "${REDIS_DISABLED}"; then
            AC_MSG_NOTICE([REDIS library was not found])
            REDIS_FOUND=0
        else
            REDIS_FOUND=2
        fi
    else
        AC_MSG_ERROR([REDIS was explicitly referenced but it was not found])
        REDIS_FOUND=-1
    fi
else
    if test -z "${REDIS_MANDATORY}"; then
        REDIS_FOUND=2
        AC_MSG_NOTICE([REDIS is disabled by default.])
    else
        REDIS_FOUND=1
        AC_MSG_NOTICE([using REDIS v${REDIS_VERSION}])
        REDIS_CFLAGS="-DWITH_REDIS ${REDIS_CFLAGS}"
        REDIS_DISPLAY="${REDIS_LDADD}, ${REDIS_CFLAGS}"
        AC_SUBST(REDIS_VERSION)
        AC_SUBST(REDIS_LDADD)
        AC_SUBST(REDIS_LIBS)
        AC_SUBST(REDIS_LDFLAGS)
        AC_SUBST(REDIS_CFLAGS)
        AC_SUBST(REDIS_DISPLAY)
    fi
fi


AC_SUBST(REDIS_FOUND)

]) # AC_DEFUN [PROG_REDIS]


AC_DEFUN([CHECK_FOR_REDIS_AT], [
    path=$1
    echo "*** LOOKING AT PATH: " ${path}
    for y in ${REDIS_POSSIBLE_EXTENSIONS}; do
        for z in ${REDIS_POSSIBLE_LIB_NAMES}; do
           if test -e "${path}/${z}.${y}"; then
               redis_lib_path="${path}/"
               redis_lib_name="${z}"
               redis_lib_file="${redis_lib_path}/${z}.${y}"
               break
           fi
           if test -e "${path}/lib${z}.${y}"; then
               redis_lib_path="${path}/"
               redis_lib_name="${z}"
               redis_lib_file="${redis_lib_path}/lib${z}.${y}"
               break
           fi
           if test -e "${path}/lib/lib${z}.${y}"; then
               redis_lib_path="${path}/lib/"
               redis_lib_name="${z}"
               redis_lib_file="${redis_lib_path}/lib${z}.${y}"
               break
           fi
           if test -e "${path}/lib/x86_64-linux-gnu/lib${z}.${y}"; then
               redis_lib_path="${path}/lib/x86_64-linux-gnu/"
               redis_lib_name="${z}"
               redis_lib_file="${redis_lib_path}/lib${z}.${y}"
               break
           fi
           if test -e "${path}/lib/i386-linux-gnu/lib${z}.${y}"; then
               redis_lib_path="${path}/lib/i386-linux-gnu/"
               redis_lib_name="${z}"
               redis_lib_file="${redis_lib_path}/lib${z}.${y}"
               break
           fi
       done
       if test -n "$redis_lib_path"; then
           break
       fi
    done
    if test -e "${path}/include/redis.h"; then
        redis_inc_path="${path}/include"
    elif test -e "${path}/redis.h"; then
        redis_inc_path="${path}"
    elif test -e "${path}/include/redis/redis.h"; then
        redis_inc_path="${path}/include"
    fi

    if test -n "${redis_lib_path}"; then
        AC_MSG_NOTICE([REDIS library found at: ${redis_lib_file}])
    fi

    if test -n "${redis_inc_path}"; then
        AC_MSG_NOTICE([REDIS headers found at: ${redis_inc_path}])
    fi

    if test -n "${redis_lib_path}" -a -n "${redis_inc_path}"; then
        # TODO: Compile a piece of code to check the version.
        REDIS_CFLAGS="-I${redis_inc_path}"
        REDIS_LDADD="-l${redis_lib_name}"
        REDIS_LDFLAGS="-L${redis_lib_path}"
        REDIS_DISPLAY="${redis_lib_file}, ${redis_inc_path}"
    fi
]) # AC_DEFUN [CHECK_FOR_REDIS_AT]
