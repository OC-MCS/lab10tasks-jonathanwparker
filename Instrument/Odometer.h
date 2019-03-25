#pragma once
#include "FuelGauge.h"
using namespace std;
class Odometer
{
private:
	double mileage;
	double fuelEconomy;
public:
	Odometer();
	Odometer(double);
	void addMile(FuelGauge& fg);
	const double getMileage();
};

