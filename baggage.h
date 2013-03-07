#ifndef BAGGAGE_H
#define BAGGAGE_H

struct Baggage {
	char owner[128];
	int flightNumber;
	double weight;
};

#endif

void log(Baggage b);