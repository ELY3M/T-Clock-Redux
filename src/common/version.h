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
#	define VER_REVISION 543
#	define VER_FULL "2.4.4 RC"
#	define VER_SHORT "2.4rc4"
#	define VER_SHORT_DOTS "2.4.4"
#	define VER_SHORT_GREEK "2.4\u0433c4"
#	define VER_RC_REVISION 2, 4, 4, 543
#	define VER_RC_STATUS 2, 4, 4, 2
/**** Subversion Information ****/
#	define VER_REVISION_URL "https://github.com/ELY3M/T-Clock-Redux.git"
#	define VER_REVISION_DATE "2026-09-13 08:06:31 +0000 (Sun, Sep 13 2026)"
#	define VER_REVISION_HASH "7c75cd4"
#	define VER_REVISION_TAG "v2.4.4#543-rc"
/**** Date/Time ****/
#	define VER_TIMESTAMP 1789287936
#	define VER_TIME_SEC 36
#	define VER_TIME_MIN 25
#	define VER_TIME_HOUR 8
#	define VER_TIME_DAY 13
#	define VER_TIME_MONTH 9
#	define VER_TIME_YEAR 2026
#	define VER_TIME_WDAY 0
#	define VER_TIME_YDAY 255
#	define VER_TIME_WDAY_SHORT "Sun"
#	define VER_TIME_WDAY_FULL "Sunday"
#	define VER_TIME_MONTH_SHORT "Sep"
#	define VER_TIME_MONTH_FULL "September"
#	define VER_TIME "08:25:36"
#	define VER_DATE "2026-09-13"
#	define VER_DATE_LONG "Sun, Sep 13, 2026 08:25:36 UTC"
#	define VER_DATE_SHORT "2026-09-13 08:25:36 UTC"
#	define VER_DATE_ISO "2026-09-13T08:25:36Z"
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
