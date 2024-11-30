// Charles Schneider
// CIS 1202 N01
// November 29th, 2024

#include "Vehicle.h";
#include "Car.h";
#include "Truck.h";

int main() {
	string manuNameHold;
	int yearHold;
	int doorHold;
	int towHold;
	Vehicle userVehicle;
	Car userCar;
	Truck userTruck;

	cout << "Vehicle Test Program - Charles Schneider\n\n";
	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: ";
	while (!(getline(cin, manuNameHold)) || cin.fail()) {
		cout << "\nEntry was invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userVehicle.setManufacturer(manuNameHold);
	cout << "Enter the year built: ";
	while (!(cin >> yearHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userVehicle.setYear(yearHold);
	userVehicle.displayInfo();
	cout << "\n\n";

	cout << "Car:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	while (!(getline(cin, manuNameHold)) || cin.fail()) {
		cout << "\nEntry was invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userCar.setManufacturer(manuNameHold);
	cout << "Enter the year built: ";
	while (!(cin >> yearHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userCar.setYear(yearHold);
	cout << "Enter the amount of doors: ";
	while (!(cin >> doorHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userCar.setDoors(doorHold);
	userCar.displayInfo();
	cout << "\n\n";

	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	while (!(getline(cin, manuNameHold)) || cin.fail()) {
		cout << "\nEntry was invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userTruck.setManufacturer(manuNameHold);
	cout << "Enter the year built: ";
	while (!(cin >> yearHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userTruck.setYear(yearHold);
	cout << "Enter the towing capacity: ";
	while (!(cin >> towHold) || cin.fail()) {
		cout << "\nEntry was NAN or invalid, please try again.\nEntry: ";
		cin.clear();
		cin.ignore();
		cin.sync();
	}
	userTruck.setTowCapacity(towHold);
	userTruck.displayInfo();
	cout << "\n\n";
	
	return 0;
}