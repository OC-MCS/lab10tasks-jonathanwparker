#pragma once
#include <string>
#include "Ship.h"
using namespace std;

class CruiseShip:public Ship
{
private:
	int numPassengers;
public:
	CruiseShip(int p, string n, string y) : Ship(n, y)
	{
		numPassengers = p;
	}
	const int getPassengers();
	void changeMaxPassengers(int p);
	void print();
};