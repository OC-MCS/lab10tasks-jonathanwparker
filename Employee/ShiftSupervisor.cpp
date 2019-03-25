#include "ShiftSupervisor.h"
#include <string>

const double ShiftSupervisor::getBonus()
{
	return bonus;
}

const double ShiftSupervisor::getPay()
{
	return pay;
}

void ShiftSupervisor::changePay(double p)
{
	pay = p;
}

void ShiftSupervisor::changeBonus(double b)
{
	bonus = b;
}