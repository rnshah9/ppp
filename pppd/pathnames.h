/*
 * define path names
 */
#ifndef PPP_PATHNAMES_H
#define PPP_PATHNAMES_H

#include "pppdconf.h"

#ifdef HAVE_PATHS_H
#include <paths.h>
#endif /* HAVE_PATHS_H */

#ifndef _PATH_DEVNULL
#define _PATH_DEVNULL	"/dev/null"
#endif

#ifdef PPPD_RUNTIME_DIR
#undef  _PATH_VARRUN
#define _PATH_VARRUN 	PPPD_RUNTIME_DIR "/"
#endif

#ifdef PPPD_LOGFILE_DIR
#undef  _PATH_VARLOG
#define _PATH_VARLOG    PPPD_LOGFILE_DIR
#endif

#ifdef PPPD_PLUGIN_DIR
#define _PATH_PLUGIN    PPPD_PLUGIN_DIR
#else
#ifdef __STDC__
#define _PATH_PLUGIN	DESTDIR "/lib/pppd/" VERSION
#else  /* __STDC__ */
#define _PATH_PLUGIN	"/usr/lib/pppd"
#endif /* __STDC__ */
#endif /* PPPD_PLUGIN_DIR */

#ifndef _ROOT_PATH
#define _ROOT_PATH
#endif

#define _PATH_UPAPFILE 	 _ROOT_PATH "/etc/ppp/pap-secrets"
#define _PATH_CHAPFILE 	 _ROOT_PATH "/etc/ppp/chap-secrets"
#define _PATH_SRPFILE 	 _ROOT_PATH "/etc/ppp/srp-secrets"

#ifdef PPP_WITH_EAPTLS
#define _PATH_EAPTLSCLIFILE	_ROOT_PATH "/etc/ppp/eaptls-client"
#define _PATH_EAPTLSSERVFILE	_ROOT_PATH "/etc/ppp/eaptls-server"
#define _PATH_OPENSSLCONFFILE	_ROOT_PATH "/etc/ppp/openssl.cnf"
#endif /* PPP_WITH_EAPTLS */

#define _PATH_SYSOPTIONS _ROOT_PATH "/etc/ppp/options"
#define _PATH_IPUP	 _ROOT_PATH "/etc/ppp/ip-up"
#define _PATH_IPDOWN	 _ROOT_PATH "/etc/ppp/ip-down"
#define _PATH_IPPREUP	 _ROOT_PATH "/etc/ppp/ip-pre-up"
#define _PATH_AUTHUP	 _ROOT_PATH "/etc/ppp/auth-up"
#define _PATH_AUTHDOWN	 _ROOT_PATH "/etc/ppp/auth-down"
#define _PATH_TTYOPT	 _ROOT_PATH "/etc/ppp/options."
#define _PATH_CONNERRS	 _ROOT_PATH _PATH_VARLOG "/connect-errors"
#define _PATH_PEERFILES	 _ROOT_PATH "/etc/ppp/peers/"
#define _PATH_RESOLV	 _ROOT_PATH "/etc/ppp/resolv.conf"

#define _PATH_USEROPT	 ".ppprc"
#define	_PATH_PSEUDONYM	 ".ppp_pseudonym"

#ifdef PPP_WITH_IPV6CP
#define _PATH_IPV6UP     _ROOT_PATH "/etc/ppp/ipv6-up"
#define _PATH_IPV6DOWN   _ROOT_PATH "/etc/ppp/ipv6-down"
#endif

#ifdef __STDC__
#define _PATH_PPPDB	_ROOT_PATH _PATH_VARRUN "pppd2.tdb"
#else /* __STDC__ */
#define _PATH_PPPDB	_PPP_VARRUN "pppd2.tdb"
#endif /* __STDC__ */

#endif /* PPP_PATHNAMES_H */
