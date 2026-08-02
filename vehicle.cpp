/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#pragma once //Prevents multiple inclusions of the header file

#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

//Constructors------------------------------------
Vehicle::Vehicle() 
{ 
    manufacturer = ""; 
    yearBuilt = 0; 
}

Vehicle::Vehicle(string m, int y) 
{ 
    manufacturer = m; 
    yearBuilt = y; 
}

//Class member functions--------------------------

//Getters----------------------------
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