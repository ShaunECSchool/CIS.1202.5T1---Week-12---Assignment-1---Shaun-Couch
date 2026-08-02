/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "car.cpp"

using namespace std;

//Instructions--------------------------------

/*
4. Write a main function to test the classes and methods.
    a. Get input from the user for manufacturer and year built, then store this information in a Vehicle object.  Call the displayInfo method and display it on the output.
    b. Get input from the user for manufacturer, year built, and number of doors, then store this information in a Car object.  Call the displayInfo method and display it on the output.
    c. Get input from the user for manufacturer, year built, and towing capacity, then store this information in a Truck object.  Call the displayInfo method and display it on the output.
*/

//Main-------------------------------------------

int main()
{
    //Creates a Vehicle object
    Vehicle vehicle1("Yoda", 2200);
    vehicle1.displayInfo();
    cout << endl;

    //Creates a Car object
    Car car1("Donna", 2222, 4);
    car1.displayInfo();
    cout << endl;

    return 0;
}