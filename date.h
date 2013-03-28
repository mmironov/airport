#ifndef DATE_H
#define DATE_H

class Date {
	unsigned short day;
	unsigned short month;
	int year;
public:
	Date();
	Date(unsigned short d, unsigned short m, int y);
	Date(const Date& date);

	unsigned short getDay() const;
	void setDay(unsigned short d);

	unsigned short getMonth() const;
	void setMonth(unsigned short m);

	int getYear() const;
	void setYear(int y);

	void setDate(unsigned short d, unsigned short m, int y);

	//returns
	//-1 if this is before date
	//0	 if this is the same date as date
	//1  if this is after date
	int compare(const Date& date);
};

bool isDateValid(unsigned short day, unsigned short month, int year);
bool isYearLeap(int year);
unsigned short numberOfDays(unsigned short month, int year);

#endif