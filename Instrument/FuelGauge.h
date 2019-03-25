#pragma once
using namespace std;
class FuelGauge
{
private:
	double fuel;
public:
	FuelGauge();
	FuelGauge(double);
	void changeFuel(double);
	const double getFuel();
};

