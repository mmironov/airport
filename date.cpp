#include "date.h"

Date::Date()
{
	day = 1;
	month = 1;
	year = 1900;
}

Date::Date(unsigned short d, unsigned short m, int y)
{
	if ( isDateValid(d, m, y) )
	{
		day = d;
		month = m;
		year = y;
	}
	else
	{
		day = 1;
		month = 1;
		year = 1900;
	}
}
	
Date::Date(const Date& date)
{
	day = date.day;
	month = date.month;
	year = date.year;
}

unsigned short Date::getDay() const
{
	return day;
}

void Date::setDay(unsigned short d)
{
	if ( isDateValid(d, month, year) )
	{
		day = d;
	}
}


unsigned short Date::getMonth() const
{
	return month;
}

void Date::setMonth(unsigned short m)
{
	if ( isDateValid(day, m, year) )
	{
		month = m;
	}
}


int Date::getYear() const
{
	return year;
}

void Date::setYear(int y)
{
	if ( isDateValid(day, month, y) )
	{
		year = y;
	}
}

void Date::setDate(unsigned short d, unsigned short m, int y)
{
	if ( isDateValid(d, m, y) )
	{
		day = d;
		month = m;
		year = y;
	}
}

bool isDateValid(unsigned short day, unsigned short month, int year)
{
	bool valid = month >= 1 &&
				 month <= 12 &&
				 day >= 1 &&
				 day <= numberOfDays(month, year);

	return valid;
}

bool isYearLeap(int year)
{
	if ( (year % 4 == 0) && ( !(year % 100 == 0) || (year % 400 == 0) ) )
	{
		return true;
	}

	return false;
}

unsigned short numberOfDays(unsigned short month, int year)
{
	switch (month)
	{
		case 2:
			return isYearLeap(year) ? 29 : 28;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
	}
}