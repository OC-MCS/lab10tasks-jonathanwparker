// main goes here
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

using namespace std;

int main()
{
	ProductionWorker comrade(1, 0.01, "Xi Jinping", 294754239, "3/14/2013");
	string dayOrNight;
	if (comrade.returnShift() == 1)
	{
		dayOrNight = "Day";
	}
	else
	{
		dayOrNight = "Night";
	}
	cout << comrade.returnName() << " with Worker id: " << comrade.returnId() << ", was hired on " << comrade.returnDateHired() << " they work the " << dayOrNight << " shift earning $" << comrade.returnPayRate() << " an hour.\n";
	comrade.getShift(2);
	comrade.getName("Totally not Xi Jinping");
	comrade.getPayRate(0.02);
	if (comrade.returnShift() == 1)
	{
		dayOrNight = "Day";
	}
	else
	{
		dayOrNight = "Night";
	}

	cout << "After new Data...\n";
	cout << comrade.returnName() << " with Worker id: " << comrade.returnId() << ", was hired on " << comrade.returnDateHired() << " they work the " << dayOrNight << " shift earning $" << comrade.returnPayRate() << " an hour.\n";
	cout << endl;
	ShiftSupervisor filthyCaptialist("Vlad III", 1122343, "11/2/1431", 154.56, 50.00);
	cout << filthyCaptialist.returnName() << " with Worker ID: " << filthyCaptialist.returnId() << ", was hired on " << filthyCaptialist.returnDateHired() << " being paid " << filthyCaptialist.getPay() << " an hour with a " << filthyCaptialist.getBonus() << " Bonus" << endl;
	filthyCaptialist.getName("Vlad the Impaler");
	filthyCaptialist.changePay(256.24);
	filthyCaptialist.changeBonus(70.00);
	cout << "After new Data...\n";
	cout << filthyCaptialist.returnName() << " with Worker ID: " << filthyCaptialist.returnId() << ", was hired on " << filthyCaptialist.returnDateHired() << " being paid " << filthyCaptialist.getPay() << " an hour with a " << filthyCaptialist.getBonus() << " Bonus" << endl;


}