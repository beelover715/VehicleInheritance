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

