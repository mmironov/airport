#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
	char name[128];
	char passportId[64];
public:
	Passenger(char name[], char passportId[]);

	const char* getName() const;
	const char* getPassportId() const;
};

#endif