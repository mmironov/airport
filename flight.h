#ifndef FLIGHT_H
#define FLIGHT_H

#include "time.h"

enum Status {
	//1. Define suitable status states for a flight.
	//For example: Check-In open; Delayed, etc.
};

enum Direction {
	ARRIVAL, DEPARTURE
};

class Flight {
	char flightNumber[10];
	
	Status status;
	
	Direction direction;

	char fromAirportCode[3];
	char toAirportCode[3];

	Date date;
	Time time;
public:
	//2. Define suitable constructors for the class
	//3. Define suitable set and get methods for the member variables
	//4. Define a method that displays flight information for the passangers on the airport display
};

//5. Define the method to dispaly the flights information as a table.
void displayFlights(Flight flights[], int from, int to);

#endif
