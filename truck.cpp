/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "truck.h"

using namespace std;

//Construcctors----------------------

Truck::Truck() : Vehicle()
{ towingCapacity = 0; }

Truck::Truck(string m, int y, int t) : Vehicle(m, y)
{ towingCapacity = t; }

//Getters----------------------------
void Truck::displayInfo()
{
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << endl;
}

int Truck::getTowingCapacity()
{
    return towingCapacity;
}
