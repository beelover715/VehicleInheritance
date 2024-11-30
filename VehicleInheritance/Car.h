// Charles Schneider
// CIS 1202 N01
// November 29th, 2024

#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int doors;
public:
    Car();
    Car(int, string, int);
    void setDoors(int);
    int getDoors();
    void displayInfo();
};

