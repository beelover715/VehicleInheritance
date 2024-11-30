// Charles Schneider
// CIS 1202 N01
// November 29th, 2024

#pragma once
#include "Vehicle.h"
class Truck :
    public Vehicle
{
private:
    int towCap;
public:
    Truck();
    Truck(int, string, int);
    void setTowCapacity(int);
    int getTowCapacity();
    void displayInfo();
};

