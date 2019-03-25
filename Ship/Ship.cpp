#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

Ship::Ship(string n, string y)
{
	name = n;
	year = y;
}

const string Ship::getName()
{
	return name;
}
const string Ship::getYear()
{
	return year;
}
void Ship::changeName(string n)
{
	name = n;
}
void Ship::print()
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Year Built: " << getYear() << endl;
}