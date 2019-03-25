#include "Odometer.h" 
#include "FuelGauge.h"
using namespace std;

Odometer::Odometer()
{
	mileage = 0.0;
	fuelEconomy = 0;
}
Odometer::Odometer(double fe)
{
	mileage = 0.0;
	fuelEconomy = fe;
}
void Odometer::addMile(FuelGauge& fg)
{
	mileage += 1.0;
	if (mileage > 999999)
	{
		mileage = 0;
	}
	fg.changeFuel(-1.0/ fuelEconomy);
}
const double Odometer::getMileage()
{
	return mileage;
}

