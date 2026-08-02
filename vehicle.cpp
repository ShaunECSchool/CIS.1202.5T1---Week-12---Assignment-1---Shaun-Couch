/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

//Instructions--------------------------------

/*
1. Define a base class called Vehicle.  Define the  member variables and method prototypes in Vehicle.h, and the implementation of the methods in Vehicle.cpp.
    a. Define member variables for manufacturer and year built
    b. Define a constructor and appropriate getters and setters
    c. Define a displayInfo method to display the contents of the object
*/


//Constructors------------------------------------
Vehicle::Vehicle() 
{ 
    string manufacturer = ""; 
    int yearBuilt = 0; 
}

Vehicle::Vehicle(string m, int y) 
{ 
    string manufacturer = m; 
    int yearBuilt = y; 
}

//Class member functions--------------------------

//getters----------------------------
void Vehicle::displayInfo()
{ 
    cout << "Manufacturer: " << manufacturer << endl; 
    cout << "Year Built: " << yearBuilt << endl; 
}

string Vehicle::getManufacturer() 
{ return manufacturer; }

int Vehicle::getYearBuilt() 
{ return yearBuilt; }

//setters----------------------------
void Vehicle::setManufacturer(string m)
{ manufacturer = m; }

void Vehicle::setYearBuilt(int y)
{ yearBuilt = y; }