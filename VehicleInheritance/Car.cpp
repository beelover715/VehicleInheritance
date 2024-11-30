#include "Car.h"

Car::Car()
{
	string manuNameHold;
	int yearHold;
	int doorHold;

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
	cout << "Enter the amount of doors: ";
	while (!(cin >> doorHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	setDoors(doorHold);
}

Car::Car(int carDoors, string carName, int carYear)
{
	setManufacturer(carName);
	setYear(carYear);
	setDoors(carDoors);
}

void Car::setDoors(int doorNum)
{
	Car::doors = doorNum;
}

int Car::getDoors()
{
	return Car::doors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << Car::doors << "\n";
}
