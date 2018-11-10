#include "pch.h"

#include <stdio.h>
#include <time.h>
#include < windows.h>
#include "DigitalClock.h"

void DigitalClock_GetTime()
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
}