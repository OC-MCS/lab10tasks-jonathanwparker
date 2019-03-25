#pragma once
#include <string>
using namespace std;

class Ship
{
private:
	string name;
	string year;
public:
	Ship(string, string);
	const string getName();
	const string getYear();
	void changeName(string);
	virtual void print();
};