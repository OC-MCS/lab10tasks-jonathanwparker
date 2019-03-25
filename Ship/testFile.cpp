#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
using namespace std;

int main()
{
	Ship *ships[3] =
	{
		new Ship("Yamato","1937"),
		new CruiseShip(1298,"Atlantic","2014"),
		new CargoShip(2348, "Crussier","1248")
	};
	for (int i = 0; i < 3; i++)
	{
		ships[i]->print();
	}
	return 0;
}