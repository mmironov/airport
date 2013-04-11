#include "baggage.h"
#include "date.h"
#include "flight.h"
#include "time.h"
#include "flight.h"
#include <cstring>
#include <iostream>
using namespace std;

void demoBaggage();
void demoFlights();

int main()
{
	demoFlights();

    return 0;
}

void demoBaggage()
{
	Baggage b;
	b.flightNumber = 1004;
	b.weight = 19;
	strcpy(b.owner, "Mironov");

	log(b);

	const char* valid = isValid(b) ? "valid" : "not valid";

	cout << "This baggage is " << valid << ".\n";

	Baggage anotherBaggage;
	anotherBaggage.flightNumber = 1010;
	anotherBaggage.weight = 14;
	strcpy(anotherBaggage.owner, "Another Mironov");

	Baggage yetAnotherBaggage;
	yetAnotherBaggage.flightNumber = 1010;
	yetAnotherBaggage.weight = 24;
	strcpy(anotherBaggage.owner, "Yet Another Mironov");

	Baggage allBaggages[] = { b, anotherBaggage, yetAnotherBaggage };
	const int SIZE = 3;

	cout << endl;

	Baggage heaviest = getHeaviestBaggage(allBaggages, SIZE);
	cout << "The heaviest baggage:" << endl;
	log(heaviest);

	cout << endl;

	redirect(&anotherBaggage, 4444);
	log(anotherBaggage);
}

void demoFlights()
{
	Flight f("815", "N1", "D31", DEPARTURE, "SYD", "LAX");

	const char* to = f.getToAirportCode();
	cout << to << endl;
}