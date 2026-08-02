/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "vehicle.cpp"

using namespace std;
    
//Instructions--------------------------------

/*
2. Define a Car class that inherits from Vehicle.  Define the member variables and method prototypes in Car.h, and the implementation of the methods in Car.cpp.
    a. Define a member variable for the number of doors
    b. Define a constructor and appropriate getters and setters
    c. Define a displayInfo method to display the contents of the object (call the base class method to display the Vehicle info, then display the Car info)
*/

//Class-----------------------------------------
class Car : public Vehicle
{
private:
    int numDoors;
public:
    //Constructors----------------------
    Car();
    Car(string m, int y, int d);

    //Getters----------------------------
    void displayInfo();
    int getNumDoors();
};