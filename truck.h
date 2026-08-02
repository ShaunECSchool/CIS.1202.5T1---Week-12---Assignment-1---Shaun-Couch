/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#include <iostream>
#include <string>
#include "vehicle.cpp"

using namespace std;

//Class-----------------------------------------
class Truck : public Vehicle
{
private:
    int towingCapacity;
public:
    //Constructors----------------------
    Truck();
    Truck(string m, int y, int t);

    //Getters----------------------------
    void displayInfo();
    int getTowingCapacity();
};