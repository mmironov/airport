#include "date.h"

unsigned short Date::getDay() const
{
	return day;
}

void Date::setDay(unsigned short d)
{
	day = d;
}


unsigned short Date::getMonth() const
{
	return month;
}

void Date::setMonth(unsigned short m)
{
	month = m;
}


int Date::getYear() const
{
	return year;
}

void Date::setYear(int y)
{
	year = y;
}