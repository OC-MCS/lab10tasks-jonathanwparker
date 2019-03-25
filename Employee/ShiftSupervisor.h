#pragma once
#include "Employee.h"
#include <string>
using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double pay;
	double bonus;
public:
	ShiftSupervisor(string n, int i, string d, double p, float b) : Employee(n, i, d)
	{
		pay = p;
		bonus = b;
	}
	const double getPay();
	const double getBonus();
	void changePay(double);
	void changeBonus(double);

};