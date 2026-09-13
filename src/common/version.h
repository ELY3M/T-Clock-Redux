#ifndef AUTOVERSION_H
#define AUTOVERSION_H
/* Note: to use integer defines as strings, use STR(), eg. STR(VER_REVISION) */
/**** Version ****/
#	define VER_MAJOR 2
#	define VER_MINOR 4
#	define VER_BUILD 4
	/** status values: 0=Alpha(α), 1=Beta(β), 2=RC(гc), 3=Release(г), 4=Maintenance(гm) */
#	define VER_STATUS 2
#	define VER_STATUS_FULL "RC"
#	define VER_STATUS_SHORT "rc"
#	define VER_STATUS_GREEK "\u0433c"
#	define VER_REVISION 531
#	define VER_FULL "2.4.4 RC"
#	define VER_SHORT "2.4rc4"
#	define VER_SHORT_DOTS "2.4.4"
#	define VER_SHORT_GREEK "2.4\u0433c4"
#	define VER_RC_REVISION 2, 4, 4, 531
#	define VER_RC_STATUS 2, 4, 4, 2
/**** Subversion Information ****/
#	define VER_REVISION_URL "git@github.com:ELY3M/T-Clock-Redux.git"
#	define VER_REVISION_DATE "2018-06-08 08:42:06 +0000 (Fri, Jun 08 2018)"
#	define VER_REVISION_HASH "2eb7e2a"
#	define VER_REVISION_TAG "v2.4.4#531-rc"
/**** Date/Time ****/
#	define VER_TIMESTAMP 1744310550
#	define VER_TIME_SEC 30
#	define VER_TIME_MIN 42
#	define VER_TIME_HOUR 18
#	define VER_TIME_DAY 10
#	define VER_TIME_MONTH 4
#	define VER_TIME_YEAR 2025
#	define VER_TIME_WDAY 4
#	define VER_TIME_YDAY 99
#	define VER_TIME_WDAY_SHORT "Thu"
#	define VER_TIME_WDAY_FULL "Thursday"
#	define VER_TIME_MONTH_SHORT "Apr"
#	define VER_TIME_MONTH_FULL "April"
#	define VER_TIME "18:42:30"
#	define VER_DATE "2025-04-10"
#	define VER_DATE_LONG "Thu, Apr 10, 2025 18:42:30 UTC"
#	define VER_DATE_SHORT "2025-04-10 18:42:30 UTC"
#	define VER_DATE_ISO "2025-04-10T18:42:30Z"
/**** Helper 'functions' ****/
#	define VER_IsReleaseOrHigher() ( VER_STATUS >= 3 )
#	define VER_IsAlpha() ( VER_STATUS == 0 )
#	define VER_IsBeta() ( VER_STATUS == 1 )
#	define VER_IsRC() ( VER_STATUS == 2 )
#	define VER_IsRelease() ( VER_STATUS == 3 )
#	define VER_IsMaintenance() ( VER_STATUS == 4 )
#ifndef STR
#	define STR_(x) #x
#	define STR(x) STR_(x)
#endif
#ifndef L
#	define L_(x) L##x
#	define L(x) L_(x)
#endif
#endif
