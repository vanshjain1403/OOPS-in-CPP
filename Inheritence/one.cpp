#include <bits/stdc++.h>
using namespace std;
//parent class
class Scooty{
    public: 
    int topspeed;
    float mileage;
    private:
    int bootspace;
};
//child class
class Bike: public Scooty{
    public: 
    int gears;
};

int main() {
    Bike b1;
    b1.topspeed = 120;
    b1.gears = 5;
    b1.mileage = 60;
    return 0;
}