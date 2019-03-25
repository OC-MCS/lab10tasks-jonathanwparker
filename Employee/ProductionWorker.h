#pragma once
#include <string>
#include "Employee.h"
using namespace std;
class ProductionWorker:public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker(int s, double pr, string n, int id, string dh) :Employee(n, id, dh)
	{
		shift = s;
		payRate = pr;
	}
	void getShift(int);
	void getPayRate(double);
	const int returnShift();
	const double returnPayRate();
};

