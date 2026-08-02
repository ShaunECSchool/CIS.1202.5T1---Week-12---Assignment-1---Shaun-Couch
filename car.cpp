/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

//Construcctors----------------------

Car::Car() : Vehicle()
{ numDoors = 0; }

Car::Car(string m, int y, int d) : Vehicle(m, y)
{ numDoors = d; }

//Getters----------------------------
void Car::displayInfo()
{
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numDoors << endl;
}

int Car::getNumDoors()
{
    return numDoors;
}
