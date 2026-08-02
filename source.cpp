/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "car.cpp"
#include "truck.cpp"

using namespace std;

//Main-------------------------------------------

int main()
{
    string manufacturer;
    int yearBuilt;
    int numDoors;
    int towingCapacity;

//Vehicle----------------------------
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << endl;
    cin.ignore(); 

    Vehicle vehicle1(manufacturer, yearBuilt);
    vehicle1.displayInfo();
    cout << endl;
    
//Car------------------------------
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    
    cout << "Enter the year built: ";
    cin >> yearBuilt;

    cout << "Enter the number of doors: ";
    cin >> numDoors;
    cout << endl;
    cin.ignore(); 

    Car car1(manufacturer, yearBuilt, numDoors);
    car1.displayInfo();
    cout << endl;

//Truck----------------------------
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    
    cout << "Enter the year built: ";
    cin >> yearBuilt;

    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;
    cout << endl;
    cin.ignore(); 

    Truck truck1(manufacturer, yearBuilt, towingCapacity);
    truck1.displayInfo();

    return 0;
}