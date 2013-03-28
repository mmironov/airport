#include "passenger.h"
#include <cstring>

Passenger::Passenger(char name[], char passportId[])
{
	strcpy(this->name, name);
	strcpy(this->passportId, passportId);
}

const char* Passenger::getName() const
{
	return name;
}

const char* Passenger::getPassportId() const
{
	return passportId;
}