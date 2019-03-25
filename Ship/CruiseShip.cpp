#include "CruiseShip.h"
#include <iostream>
#include <string>

const int CruiseShip::getPassengers()
{
	return numPassengers;
}

void CruiseShip::changeMaxPassengers(int p)
{
	numPassengers = p;
}

void CruiseShip::print()
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Passenger Capacity: " << getPassengers()<< " people." << endl;
}