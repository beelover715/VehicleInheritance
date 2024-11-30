// Charles Schneider
// CIS 1202 N01
// November 29th, 2024

#include "Vehicle.h"

Vehicle::Vehicle()
{
}

Vehicle::Vehicle(string manuName, int yearBuilt)
{
	setManufacturer(manuName);
	setYear(yearBuilt);
}

void Vehicle::setManufacturer(string getVehicleManu)
{
	Vehicle::manufacturer = getVehicleManu;
}

void Vehicle::setYear(int getVehicleYear)
{
	Vehicle::year = getVehicleYear;
}

string Vehicle::getManufacturer()
{
	return Vehicle::manufacturer;
}

int Vehicle::getYear()
{
	return Vehicle::year;
}

void Vehicle::displayInfo()
{
	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << Vehicle::manufacturer << "\n";
	cout << "Year Built: " << Vehicle::year << "\n";
}
