#include "time.h"

Time::Time()
{
	seconds = 0;
	minutes = 0;
	hours = 0;
}


Time::Time(unsigned short s, unsigned short m, unsigned short h)
{
	seconds = (s >= 0 && s <= 59) ? s : 0;
	minutes = (m >= 0 && m <= 59) ? m : 0;
	hours = (h >= 0 && h <= 23) ? h : 0;
}
    
Time::Time(const Time& time)
{
	seconds = time.seconds;
	minutes = time.minutes;
	hours = time.hours;
}

unsigned short Time::getSeconds() const
{
	return seconds;
}
    
void Time::setSeconds(unsigned short s)
{
	if (s >=0 && s <= 59)
	{
		seconds = s;
	}
}

unsigned short Time::getMinutes() const
{
	return minutes;
}
void Time::setMinutes(unsigned short m)
{
	if (m >= 0 && m <= 59)
	{
		minutes = m;
	}
}

unsigned short Time::getHours() const
{
	return hours;
}

void Time::setHours(unsigned short h)
{
	if (h >= 0 && h <= 23)
	{
		hours = h;
	}
}

int Time::compare(const Time& time)
{
	if (hours < time.hours)
	{
		return -1;
	}
	else if (hours > time.hours)
	{
		return 1;
	}

	if (minutes < time.minutes)
	{
		return -1;
	}
	else if (minutes > time.minutes)
	{
		return 1;
	}

	if (seconds < time.seconds)
	{
		return -1;
	}
	else if (seconds > time.seconds)
	{
		return 1;
	}

	return 0;
}