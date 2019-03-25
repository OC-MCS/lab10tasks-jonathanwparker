#pragma once

#include <string>
using namespace std;
class Employee
{
private:
	string name;
	int id;
	string dateHired;
public:
	Employee(string, int, string);
	void getName(string);
	const string returnName();
	const int returnId();
	const string returnDateHired();
};

