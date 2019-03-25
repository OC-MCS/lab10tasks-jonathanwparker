#include <iostream>
#include <iomanip>
#include "FuelGauge.h"
#include "Odometer.h"
using namespace std;

int main()
{
	double fuel = 3.0;
	double fuelEconomy = 24.0;
	Odometer o(fuelEconomy);
	FuelGauge fg;
	cout << "Inputting " << fuel << " Gallons of gas into the car.\n";
	fg.changeFuel(fuel);
	while (fg.getFuel() >= 0)
	{
		o.addMile(fg);
	}
	cout << "Car is out of gas and the car has moved " << o.getMileage() << endl;

}