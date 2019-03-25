#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee(string n, int i, string d)
{
	name = n;
	id = i;
	dateHired = d;
}
void Employee::getName(string n)
{
	name = n;
}
const string Employee::returnName()
{
	return name;
}
const int Employee::returnId()
{
	return id;
}
const string Employee::returnDateHired()
{
	return dateHired;
}


