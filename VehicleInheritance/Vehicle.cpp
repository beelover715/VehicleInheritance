#include "Vehicle.h"

Vehicle::Vehicle()
{
	string manuNameHold;
	int yearHold;

	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: ";
	while (!(getline(cin, manuNameHold)) || cin.fail()) {
		cout << "\nEntry was invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	setManufacturer(manuNameHold);
	cout << "Enter the year built: ";
	while (!(cin >> yearHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	setYear(yearHold);
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
