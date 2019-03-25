#pragma once
#include <string>
#include "Ship.h"
using namespace std;

class CargoShip :public Ship
{
private:
	int cargoCapacity;
public:
	CargoShip(int c, string n, string y):Ship(n, y)
	{
		cargoCapacity = c;
	}
	const int getCargoCapacity();
	void changeCargoCapacity(int c);
	void print();
};