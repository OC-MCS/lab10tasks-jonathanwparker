#include "ProductionWorker.h"


void ProductionWorker::getShift(int s)
{
	shift = s;
}
void ProductionWorker::getPayRate(double pr)
{
	payRate = pr;
}
const int ProductionWorker::returnShift()
{
	return shift;
}
const double ProductionWorker::returnPayRate()
{
	return payRate;
}



