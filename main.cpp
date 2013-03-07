#include "baggage.h"
#include <cstring>
using namespace std;

int main()
{
	Baggage b;
	b.flightNumber = 1004;
	b.weight = 19;
	strcpy(b.owner, "Mironov");

	log(b);

    return 0;
}