// Charles Schneider
// CIS 1202 N01
// November 29th, 2024

#include "Truck.h"

Truck::Truck()
{
}

Truck::Truck(int truckCap, string truckName, int truckYear)
{
	setManufacturer(truckName);
	setYear(truckYear);
	setTowCapacity(truckCap);
}

void Truck::setTowCapacity(int towNum)
{
	Truck::towCap = towNum;
}

int Truck::getTowCapacity()
{
	return Truck::towCap;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << Truck::towCap << "\n";
}
