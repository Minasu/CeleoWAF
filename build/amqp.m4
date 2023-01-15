dnl Check for AMQP Libraries
dnl CHECK_AMQP(ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND])

AC_DEFUN([PROG_AMQP], [

# Possible names for the amqp library/package (pkg-config)
AMQP_POSSIBLE_LIB_NAMES="rabbitmq"

# Possible extensions for the library
AMQP_POSSIBLE_EXTENSIONS="so so0 la sl dll dylib so.0.0.0"

# Possible paths (if pkg-config was not found, proceed with the file lookup)
AMQP_POSSIBLE_PATHS="/usr/lib /usr/local/lib /usr/local/libamqp /usr/local/rabbitmq /usr/local /opt/libamqp /opt/rabbitmq /opt /usr /usr/lib64 /opt/local"

# Variables to be set by this very own script.
AMQP_VERSION=""
AMQP_CFLAGS=""
AMQP_CPPFLAGS=""
AMQP_LDADD=""
AMQP_LDFLAGS=""

AC_ARG_WITH(
    amqp,
    [AS_HELP_STRING([--with-amqp=PATH],[Path to amqp prefix or config script])]
)

if test "x${with_amqp}" == "xno"; then
    AC_DEFINE(HAVE_AMQP, 0, [Support for AMQP was disabled by the utilization of --without-amqp or --with-amqp=no])
    AC_MSG_NOTICE([Support for AMQP was disabled by the utilization of --without-amqp or --with-amqp=no])
    AMQP_DISABLED=yes
else
    if test "x${with_amqp}" == "xyes"; then
        AMQP_MANDATORY=yes
        AC_MSG_NOTICE([AMQP support was marked as mandatory by the utilization of --with-amqp=yes])
    fi
#        for x in ${AMQP_POSSIBLE_LIB_NAMES}; do
#            CHECK_FOR_AMQP_AT(${x})
#            if test -n "${AMQP_VERSION}"; then
#                break
#            fi
#        done

#    if test "x${with_amqp}" != "xyes" or test "x${with_amqp}" == "xyes"; then
        if test "x${with_amqp}" == "x" || test "x${with_amqp}" == "xyes"; then
            # Nothing about AMQP was informed, using the pkg-config to figure things out.
            if test -n "${PKG_CONFIG}"; then
                AMQP_PKG_NAME=""
                for x in ${AMQP_POSSIBLE_LIB_NAMES}; do
                    if ${PKG_CONFIG} --exists ${x}; then
                        AMQP_PKG_NAME="$x"
                        break
                    fi
                done
            fi
            AC_MSG_NOTICE([Nothing about AMQP was informed during the configure phase. Trying to detect it on the platform...])
            if test -n "${AMQP_PKG_NAME}"; then
                # Package was found using the pkg-config scripts
                AMQP_VERSION="`${PKG_CONFIG} ${AMQP_PKG_NAME} --modversion`"
                AMQP_CFLAGS="`${PKG_CONFIG} ${AMQP_PKG_NAME} --cflags`"
                AMQP_LDADD="`${PKG_CONFIG} ${AMQP_PKG_NAME} --libs-only-l`"
                AMQP_LDFLAGS="`${PKG_CONFIG} ${AMQP_PKG_NAME} --libs-only-L --libs-only-other`"
                AMQP_DISPLAY="${AMQP_LDADD}, ${AMQP_CFLAGS}"
            else
                # If pkg-config did not find anything useful, go over file lookup.
                for x in ${AMQP_POSSIBLE_PATHS}; do
                    CHECK_FOR_AMQP_AT(${x})
                    if test -n "${AMQP_VERSION}"; then
                        break
                    fi
                done
            fi
        fi
        if test "x${with_amqp}" != "x"; then
            # An specific path was informed, lets check.
            AMQP_MANDATORY=yes
            CHECK_FOR_AMQP_AT(${with_amqp})
        fi
#    fi
fi

if test -z "${AMQP_LDADD}"; then
    if test -z "${AMQP_MANDATORY}"; then
        if test -z "${AMQP_DISABLED}"; then
            AC_MSG_NOTICE([AMQP library was not found])
            AMQP_FOUND=0
        else
            AMQP_FOUND=2
        fi
    else
        AC_MSG_ERROR([AMQP was explicitly referenced but it was not found])
        AMQP_FOUND=-1
    fi
else
    if test -z "${AMQP_MANDATORY}"; then
        AMQP_FOUND=2
        AC_MSG_NOTICE([AMQP is disabled by default.])
    else
        AMQP_FOUND=1
        AC_MSG_NOTICE([using AMQP v${AMQP_VERSION}])
        AMQP_CFLAGS="-DWITH_AMQP ${AMQP_CFLAGS}"
        AMQP_DISPLAY="${AMQP_LDADD}, ${AMQP_CFLAGS}"
        AC_SUBST(AMQP_VERSION)
        AC_SUBST(AMQP_LDADD)
        AC_SUBST(AMQP_LIBS)
        AC_SUBST(AMQP_LDFLAGS)
        AC_SUBST(AMQP_CFLAGS)
        AC_SUBST(AMQP_DISPLAY)
    fi
fi


AC_SUBST(AMQP_FOUND)

]) # AC_DEFUN [PROG_AMQP]


AC_DEFUN([CHECK_FOR_AMQP_AT], [
    path=$1
    echo "*** LOOKING AT PATH: " ${path}
    for y in ${AMQP_POSSIBLE_EXTENSIONS}; do
        for z in ${AMQP_POSSIBLE_LIB_NAMES}; do
           if test -e "${path}/${z}.${y}"; then
               amqp_lib_path="${path}/"
               amqp_lib_name="${z}"
               amqp_lib_file="${amqp_lib_path}/${z}.${y}"
               break
           fi
           if test -e "${path}/lib${z}.${y}"; then
               amqp_lib_path="${path}/"
               amqp_lib_name="${z}"
               amqp_lib_file="${amqp_lib_path}/lib${z}.${y}"
               break
           fi
           if test -e "${path}/lib/lib${z}.${y}"; then
               amqp_lib_path="${path}/lib/"
               amqp_lib_name="${z}"
               amqp_lib_file="${amqp_lib_path}/lib${z}.${y}"
               break
           fi
           if test -e "${path}/lib/x86_64-linux-gnu/lib${z}.${y}"; then
               amqp_lib_path="${path}/lib/x86_64-linux-gnu/"
               amqp_lib_name="${z}"
               amqp_lib_file="${amqp_lib_path}/lib${z}.${y}"
               break
           fi
           if test -e "${path}/lib/i386-linux-gnu/lib${z}.${y}"; then
               amqp_lib_path="${path}/lib/i386-linux-gnu/"
               amqp_lib_name="${z}"
               amqp_lib_file="${amqp_lib_path}/lib${z}.${y}"
               break
           fi
       done
       if test -n "$amqp_lib_path"; then
           break
       fi
    done
    if test -e "${path}/include/amqp.h"; then
        amqp_inc_path="${path}/include"
    elif test -e "${path}/amqp.h"; then
        amqp_inc_path="${path}"
    elif test -e "${path}/include/amqp/amqp.h"; then
        amqp_inc_path="${path}/include"
    fi

    if test -n "${amqp_lib_path}"; then
        AC_MSG_NOTICE([AMQP library found at: ${amqp_lib_file}])
    fi

    if test -n "${amqp_inc_path}"; then
        AC_MSG_NOTICE([AMQP headers found at: ${amqp_inc_path}])
    fi

    if test -n "${amqp_lib_path}" -a -n "${amqp_inc_path}"; then
        # TODO: Compile a piece of code to check the version.
        AMQP_CFLAGS="-I${amqp_inc_path}"
        AMQP_LDADD="-l${amqp_lib_name}"
        AMQP_LDFLAGS="-L${amqp_lib_path}"
        AMQP_DISPLAY="${amqp_lib_file}, ${amqp_inc_path}"
    fi
]) # AC_DEFUN [CHECK_FOR_AMQP_AT]
