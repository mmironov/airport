#include "baggage.h"
#include <iostream>
using namespace std;

void log(Baggage b)
{
    cout << "Owner: " << b.owner << endl;
    cout << "Flight number: " << b.flightNumber << endl;
    cout << "Weight: " << b.weight << endl;
}
