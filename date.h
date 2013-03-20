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
};

bool isDateValid(unsigned short day, unsigned short month, int year);
bool isYearLeap(int year);
unsigned short numberOfDays(unsigned short month, int year);

#endif