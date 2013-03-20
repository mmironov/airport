#ifndef TIME_H
#define TIME_H

class Time {
    unsigned short seconds;
    unsigned short minutes;
    unsigned short hours;
public:
    Time();
    Time(unsigned short s, unsigned short m, unsigned short h);
    Time(const Time& time);

    unsigned short getSeconds() const;
    void setSeconds(unsigned short s);

    unsigned short getMinutes() const;
    void setMinutes(unsigned short m);

    unsigned short getHours() const;
    void setHours(unsigned short h);

	//0. Write definitions for the constructors and the methods of the class.
};

#endif
