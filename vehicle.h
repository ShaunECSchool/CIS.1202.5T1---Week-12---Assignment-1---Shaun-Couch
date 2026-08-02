/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>

using namespace std;


//Instructions--------------------------------

/*
1. Define a base class called Vehicle.  Define the  member variables and method prototypes in Vehicle.h, and the implementation of the methods in Vehicle.cpp.
    a. Define member variables for manufacturer and year built
    b. Define a constructor and appropriate getters and setters
    c. Define a displayInfo method to display the contents of the object
*/

//Class-----------------------------------------
class Vehicle 
{
private:
    string manufacturer;
    int yearBuilt;
public:
    //Constructors----------------------
    Vehicle() 
    { manufacturer = ""; yearBuilt = 0; }
    
    Vehicle(string m, int y) 
    { manufacturer = m; yearBuilt = y; }
    
    //getters----------------------------
    void displayInfo() 
    { 
        cout << "Manufacturer: " << manufacturer << endl; 
        cout << "Year Built: " << yearBuilt << endl; 
    }

    string getManufacturer() 
    { return manufacturer; }
    
    int getYearBuilt() 
    { return yearBuilt; }

    //setters----------------------------
    void setManufacturer(string m)
    { manufacturer = m; }
    
    void setYearBuilt(int y)
    { yearBuilt = y; }
};