/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "car.h"

using namespace std;
    
//Instructions--------------------------------

/*
2. Define a Car class that inherits from Vehicle.  Define the member variables and method prototypes in Car.h, and the implementation of the methods in Car.cpp.
    a. Define a member variable for the number of doors
    b. Define a constructor and appropriate getters and setters
    c. Define a displayInfo method to display the contents of the object (call the base class method to display the Vehicle info, then display the Car info)
*/

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
