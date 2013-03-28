#include "flight.h"
#include <cstring>

Flight::Flight(char flightNumber[], char terminal[], char gate[], Direction direction, char fromAirportCode[], char toAirportCode[])
{
	this->status = Status::NEW;

	strcpy(this->flightNumber, flightNumber);
	strcpy(this->terminal, terminal);
	strcpy(this->gate, gate);
	
	this->direction = direction;

	strcpy(this->fromAirportCode, fromAirportCode);
	strcpy(this->toAirportCode, toAirportCode);
}

const char* Flight::getFlightNumber() const
{
	return flightNumber;
}
	
const char* Flight::getTerminal() const
{
	return terminal;
}

const char* Flight::getGate() const
{
	return gate;
}

Status Flight::getStatus() const
{
	return status;
}
	
Direction Flight::getDirection() const
{
	return direction;
}

const char* Flight::getFromAirportCode() const
{
	return fromAirportCode;
}

const char* Flight::getToAirportCode() const
{
	return toAirportCode;
}

int Flight::compare(const Flight& flight)
{
	int dateComp = date.compare(flight.date);

	if (dateComp != 0)
	{
		return dateComp;
	}

	int timeComp = time.compare(flight.time);

	if (timeComp != 0)
	{
		return timeComp;
	}

	return strcmp(flightNumber, flight.flightNumber);
}