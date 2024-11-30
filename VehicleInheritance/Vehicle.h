#pragma once

#include <iostream>
#include <string>

using namespace std;


class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle();
	Vehicle(string, int);
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer();
	int getYear();
	virtual void displayInfo();
};

