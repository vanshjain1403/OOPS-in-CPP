#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public: 
    int topspeed;
    float mileage;
    string fueltype;
};

class Car : public Vehicle {
public: 
    bool sunroof;
};



class Truck : public Vehicle {
public: 
    float loadcapacity;
};

class Bike : public Vehicle {
public: 
    int gears;
};

int main() {
    Bike b1;
    b1.topspeed = 120;
    b1.gears = 5;
    b1.mileage = 60;
    b1.fueltype = "Petrol";

    Car c1;
    c1.topspeed = 180;
    c1.mileage = 15;
    c1.fueltype = "Petrol";
    c1.sunroof = true;

    Truck t1;
    t1.topspeed = 80;
    t1.mileage = 4;
    t1.fueltype = "Diesel";
    t1.loadcapacity = 15.5;

    return 0;
}