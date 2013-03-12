#include "baggage.h"
#include <iostream>
#include <cstring>
using namespace std;

void log(Baggage b)
{
    cout << "Owner: " << b.owner << endl;
    cout << "Flight number: " << b.flightNumber << endl;
    cout << "Weight: " << b.weight << endl;
}

bool allowOnBoard(Baggage baggage)
{
	return baggage.weight <= 30;
}

bool isValid(Baggage baggage)
{
	if (baggage.weight < 0)
	{
		return false;
	}

	if (baggage.flightNumber < 1000 || baggage.flightNumber > 9999)
	{
		return false;
	}

	char* owner = baggage.owner;
	int len = strlen(owner);


	if (len < 2)
	{
		return false;
	}

	for(int i=0; i < len; ++i)
	{
		if ( owner[i] >= '0' && owner[i] <= '9' )
		{
			return false;
		}
	}

	return true;
}

Baggage getHeaviestBaggage(Baggage baggages[], int count)
{
	double max = baggages[0].weight;
	int maxIndex = 0;

	for(int i=1; i < count; ++i)
	{
		if ( baggages[i].weight > max )
		{
			max = baggages[i].weight;
			maxIndex = i;
		}
	}

	return baggages[maxIndex];
}

void redirect(Baggage* baggage, int toFlightNumber)
{
	baggage->flightNumber = toFlightNumber;
	//the same as
	//(*baggage).flightNumber = toFlightNumber;
}