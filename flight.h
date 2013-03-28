#ifndef FLIGHT_H
#define FLIGHT_H

#include "time.h"
#include "date.h"

enum Status {
	NEW,
	CHECK_IN,
	BOARDING,
	CLOSED,
	DELAYED,
	CANCELED
};

enum Direction {
	ARRIVAL, DEPARTURE
};

class Flight {
	char flightNumber[10];
	
	char terminal[10];
	char gate[10];

	Status status;
	
	Direction direction;

	char fromAirportCode[3];
	char toAirportCode[3];

	Date date;
	Time time;
public:
	Flight(char flightNumber[], char terminal[], char gate[], Direction direction, char fromAirportCode[], char toAirportCode[]);

	const char* getFlightNumber() const;
	const char* getTerminal() const;
	const char* getGate() const;
	Status getStatus() const;
	Direction getDirection() const;
	const char* getFromAirportCode() const;
	const char* getToAirportCode() const;

	int compare(const Flight& flight);
};

void displayFlights(Flight flights[], int from, int to);

#endif
