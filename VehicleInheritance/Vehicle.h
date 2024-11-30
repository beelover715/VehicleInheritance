// Charles Schneider
// CIS 1202 N01
// November 29th, 2024

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

