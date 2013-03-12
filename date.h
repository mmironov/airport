#ifndef DATE_H
#define DATE_H

class Date {
	unsigned short day;
	unsigned short month;
	int year;
public:
	unsigned short getDay() const;
	void setDay(unsigned short d);

	unsigned short getMonth() const;
	void setMonth(unsigned short m);

	int getYear() const;
	void setYear(int y);
};

#endif