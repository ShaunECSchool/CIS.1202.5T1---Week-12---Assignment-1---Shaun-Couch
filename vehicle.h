/*
Shaun Couch
CIS.1202.5T1
August/1/2026
*/

#pragma once //Prevents multiple inclusions of the header file

#include <iostream>
#include <string>

using namespace std;


//Class-----------------------------------------
class Vehicle 
{
private:
    string manufacturer;
    int yearBuilt;
public:
    //Constructors-----------------------
    Vehicle();
    Vehicle(string m, int y);
    
//Class member function prototypes-------
    
    //Getters----------------------------
    void displayInfo();
    string getManufacturer(); 
    int getYearBuilt(); 

    //Setters----------------------------
    void setManufacturer(string m);
    void setYearBuilt(int y);
};