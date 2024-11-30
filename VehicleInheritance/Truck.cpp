#include "Truck.h"

Truck::Truck()
{
	string manuNameHold;
	int yearHold;
	int towHold;

	cout << "Car:\n";
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
	cout << "Enter the atowing capacity: ";
	while (!(cin >> towHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	setTowCapacity(towHold);
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
