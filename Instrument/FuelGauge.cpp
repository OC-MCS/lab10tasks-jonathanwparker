#include "FuelGauge.h"
FuelGauge::FuelGauge()
{
	fuel = 0.0;
}
FuelGauge::FuelGauge(double f)
{
	fuel = f;
}
void FuelGauge::changeFuel(double cf)
{
	fuel += cf;
}
const double FuelGauge::getFuel()
{
	return fuel;
}
