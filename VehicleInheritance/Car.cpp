// Charles Schneider
// CIS 1202 N01
// November 29th, 2024

#include "Car.h"

Car::Car()
{
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
