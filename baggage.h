#ifndef BAGGAGE_H
#define BAGGAGE_H

struct Baggage {
	char owner[128];
	int flightNumber;
	double weight;
};

void log(Baggage b);
bool allowOnBoard(Baggage baggage);
bool isValid(Baggage baggage);
Baggage getHeaviestBaggage(Baggage baggages[], int count);
void redirect(Baggage* baggage, int toFlightNumber);

#endif