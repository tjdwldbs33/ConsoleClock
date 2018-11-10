#include "pch.h"

#include <stdio.h>
#include <time.h>
#include < windows.h>
#include "DigitalClock.h"

DigitalClock DigitalClock_GetTime()
{
	time_t now = time(NULL);
	struct tm time;
	localtime_s(&time, &now);

	printf("%04d-%02d-%02d %02d:%02d:%02d",
		time.tm_year + 1900,
		time.tm_mon + 1,
		time.tm_mday,
		time.tm_hour,
		time.tm_min,
		time.tm_sec);

	DigitalClock dgc;
	dgc.year = time.tm_year + 1900;
	dgc.month = time.tm_mon + 1;
	dgc.dayOfMonth = time.tm_mday;
	dgc.dayOfWeek = time.tm_wday;
	dgc.hour = time.tm_hour;
	dgc.minute = time.tm_min;
	dgc.second = time.tm_sec;

	return dgc;
}