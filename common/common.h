/*
 ******************************************************************************
 *
 * File:    common.h
 *
 * Author:  Damien Stuart
 *
 * Purpose: Common header file for fwknop client and server programs.
 *
 * Copyright (C) 2009 Damien Stuart (dstuart@dstuart.org)
 *
 *  License (GNU Public License):
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program; if not, write to the Free Software
 *     Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *     USA
 *
 ******************************************************************************
*/
#ifndef _COMMON_H
#define _COMMON_H

/* Common includes for our other fwknop client and server source files.
*/
#if HAVE_CONFIG_H
  #include "config.h"
#endif

#include <stdio.h>
#include <sys/types.h>

#include <errno.h>

#if STDC_HEADERS
  #include <stdlib.h>
  #include <string.h>
#elif HAVE_STRINGS_H
  #include <strings.h>
#endif /* STDC_HEADERS*/

#if HAVE_UNISTD_H
  #include <unistd.h>
#endif

#if HAVE_NETINET_IN_H
  #include <netinet/in.h>
#endif

#ifdef WIN32
  #define strncasecmp	_strnicmp
  #define snprintf		_snprintf
  #define unlink		_unlink
#else
  #include <signal.h>
#endif

#include "fko.h"

/* Get our program version from VERSION (defined in config.h).
*/
#define MY_VERSION VERSION

enum {
    FKO_PROTO_UDP,
    FKO_PROTO_TCP,
    FKO_PROTO_TCP_RAW,
    FKO_PROTO_ICMP,
    FKO_PROTO_HTTP,
};

/* Other common defines
*/
#define FKO_DEFAULT_PROTO   FKO_PROTO_UDP
#define FKO_DEFAULT_PORT    62201
#define DEFAULT_NAT_PORT    55000
#define MIN_HIGH_PORT       10000  /* sensible minimum for SPA dest port */
#define MAX_PORT            65535
#define MAX_PORT_STR_LEN    6
#define MAX_PROTO_STR_LEN   6
#define MAX_IP_STR_LEN      16
#define MIN_IP_STR_LEN      9
#define MAX_SERVER_STR_LEN  50

#define MAX_LINE_LEN        1024
#define MAX_PATH_LEN        1024
#define MAX_GPG_KEY_ID      128
#define MAX_USERNAME_LEN    30

#endif /* _COMMON_H */

/***EOF***/