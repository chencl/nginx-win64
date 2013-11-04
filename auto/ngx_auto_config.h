#define NGX_CONFIGURE " --build=win32 --with-cc-opt=-DFD_SETSIZE=2048"

#define FD_SETSIZE 2048

#ifndef NGX_COMPILER
#define NGX_COMPILER  "msvc 2012 (Microsoft (R) x64 C/C++ Optimizing Compiler Version 17.00.60610.1)"
#endif

#ifndef HAVE_CONFIG_H
#define HAVE_CONFIG_H 1
#endif

#ifndef NGX_HAVE_C99_VARIADIC_MACROS
#define NGX_HAVE_C99_VARIADIC_MACROS  1
#endif

#ifndef NGX_HAVE_CPU_AFFINITY
#define NGX_HAVE_CPU_AFFINITY 1
#endif

#ifndef NGX_PERL_MODULES
#define NGX_PERL_MODULES 1
#define NGX_HAVE_PERL_MULTIPLICITY 1
#endif // !NGX_PERL_MODULES


#ifndef NGX_HAVE_AIO
#define NGX_HAVE_AIO  1
#endif

#ifndef NGX_HAVE_ALIGNED_DIRECTIO
#define NGX_HAVE_ALIGNED_DIRECTIO 1
#endif

// windows 不支持
// #ifndef NGX_HAVE_FILE_AIO
// #define NGX_HAVE_FILE_AIO 1
// #endif

#ifndef NGX_HAVE_AIO_SENDFILE
#define NGX_HAVE_AIO_SENDFILE 1
#endif

#ifndef NGX_HAVE_IOCP
#define NGX_HAVE_IOCP  1
#endif

// #ifndef NGX_HAVE_POSIX_SEM
// #define NGX_HAVE_POSIX_SEM 1
// #endif

// #ifndef NGX_HAVE_DEFERRED_ACCEPT
// #define NGX_HAVE_DEFERRED_ACCEPT 1
// #endif

// #ifndef SO_ACCEPTFILTER
// #define SO_ACCEPTFILTER 1
// #endif

// #ifndef NGX_HAVE_SETFIB
// #define NGX_HAVE_SETFIB 1
// #endif

// #ifndef NGX_HAVE_OPENAT
// #define NGX_HAVE_OPENAT 1
// #endif

// #ifndef NGX_HAVE_UNIX_DOMAIN
// #define NGX_HAVE_UNIX_DOMAIN 1
// #endif

#ifndef NGX_CPU_CACHE_LINE
#define NGX_CPU_CACHE_LINE  32
#endif

#ifndef NGX_PCRE
#define NGX_PCRE 1
#endif

#ifndef NGX_HAVE_PCRE_JIT
#define NGX_HAVE_PCRE_JIT 1
#endif

#ifndef NGX_SSL
#define NGX_SSL 1
#endif

#ifndef NGX_OPENSSL
#define NGX_OPENSSL 1
#endif

#ifndef NGX_HAVE_OPENSSL_SHA1_H
#define NGX_HAVE_OPENSSL_SHA1_H 1
#endif

#ifndef NGX_HAVE_MD5
#define NGX_HAVE_MD5 1
#endif

#ifndef NGX_HAVE_OPENSSL_MD5_H
#define NGX_HAVE_OPENSSL_MD5_H 1
#endif

#ifndef NGX_OPENSSL_MD5
#define NGX_OPENSSL_MD5 1
#endif

#ifndef NGX_HTTP_CACHE
#define NGX_HTTP_CACHE  1
#endif

#ifndef NGX_HAVE_INET6
#define NGX_HAVE_INET6 1
#endif

// windows 不支持
// #ifndef NGX_HAVE_KEEPALIVE_TUNABLE
// #define NGX_HAVE_KEEPALIVE_TUNABLE 1
// #endif

#ifndef NGX_CRYPT
#define NGX_CRYPT  1
#define NGX_HAVE_SHA1 1
#endif

#ifndef NGX_HAVE_SELECT
#define NGX_HAVE_SELECT  1
#endif

#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif

#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR 1
#endif

#ifndef NGX_HTTP_HEADERS
#define NGX_HTTP_HEADERS 1
#endif

#ifndef NGX_HTTP_GEO
#define NGX_HTTP_GEO  1
#define NGX_HAVE_GEOIP_V6 1
#endif

#ifndef NGX_HTTP_DAV
#define NGX_HTTP_DAV 1
#endif

//  #ifndef NGX_HTTP_DEGRADATION
//  #define NGX_HTTP_DEGRADATION 1
//  #endif

#ifndef NGX_HTTP_PROXY
#define NGX_HTTP_PROXY  1
#endif

#ifndef NGX_HTTP_SPDY
#define NGX_HTTP_SPDY 1
#endif // !NGX_HTTP_SPDY


#ifndef NGX_HTTP_REALIP
#define NGX_HTTP_REALIP 1
#endif

#ifndef NGX_HTTP_SSL
#define NGX_HTTP_SSL 1
#endif

#ifndef NGX_HTTP_SSI
#define NGX_HTTP_SSI 1
#endif

#ifndef NGX_STAT_STUB
#define NGX_STAT_STUB 1
#endif

#ifndef NGX_HAVE_EXSLT
#define NGX_HAVE_EXSLT 1
#endif

#ifndef NGX_MAIL_SSL
#define NGX_MAIL_SSL 1
#endif

#ifndef NGX_CONF_PREFIX
#define NGX_CONF_PREFIX  "conf\\"
#endif


#ifndef NGX_SBIN_PATH
#define NGX_SBIN_PATH  ""
#endif


#ifndef NGX_CONF_PATH
#define NGX_CONF_PATH  "conf\\nginx.conf"
#endif


#ifndef NGX_PID_PATH
#define NGX_PID_PATH  "logs\\nginx.pid"
#endif


#ifndef NGX_LOCK_PATH
#define NGX_LOCK_PATH  "logs\\nginx.lock"
#endif


#ifndef NGX_ERROR_LOG_PATH
#define NGX_ERROR_LOG_PATH  "logs\\error.log"
#endif


#ifndef NGX_HTTP_LOG_PATH
#define NGX_HTTP_LOG_PATH  "logs\\access.log"
#endif


#ifndef NGX_HTTP_CLIENT_TEMP_PATH
#define NGX_HTTP_CLIENT_TEMP_PATH  "client_body_temp"
#endif


#ifndef NGX_HTTP_PROXY_TEMP_PATH
#define NGX_HTTP_PROXY_TEMP_PATH  "proxy_temp"
#endif


#ifndef NGX_HTTP_FASTCGI_TEMP_PATH
#define NGX_HTTP_FASTCGI_TEMP_PATH  "fastcgi_temp"
#endif


#ifndef NGX_HTTP_UWSGI_TEMP_PATH
#define NGX_HTTP_UWSGI_TEMP_PATH  "uwsgi_temp"
#endif


#ifndef NGX_HTTP_SCGI_TEMP_PATH
#define NGX_HTTP_SCGI_TEMP_PATH  "scgi_temp"
#endif


#ifndef NGX_SUPPRESS_WARN
#define NGX_SUPPRESS_WARN  1
#endif


#ifndef NGX_SMP
#define NGX_SMP  1
#endif


#ifndef NGX_USER
#define NGX_USER  ""
#endif


#ifndef NGX_GROUP
#define NGX_GROUP  ""
#endif

