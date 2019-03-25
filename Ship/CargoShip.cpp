#include "CargoShip.h"
#include <iostream>
#include <string>
using namespace std;

const int CargoShip::getCargoCapacity()
{
	return cargoCapacity;
}

void CargoShip::changeCargoCapacity(int c)
{
	cargoCapacity = c;
}

void CargoShip::print()
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Cargo Capacity: " << getCargoCapacity() << " tonnes." << endl;
}