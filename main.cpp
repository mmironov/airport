#include "baggage.h"
#include "date.h"
#include "flight.h"
#include "time.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	Baggage b;
	b.flightNumber = 1004;
	b.weight = 19;
	strcpy(b.owner, "Mironov");

	log(b);

	char* valid = isValid(b) ? "valid" : "not valid";

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

    return 0;
}