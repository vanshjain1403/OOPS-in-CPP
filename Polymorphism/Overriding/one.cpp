#include <bits/stdc++.h>
using namespace std;
class Scooty{
    public:
    int topspeed;
    float mileage;

    virtual void sound(){
        cout<<"VROOOOOOOOOOM VROOOOOOOOOOM"<<endl;
    }
    private:
    int bootspace;
};
class Bike: public Scooty{
public:
void sound(){
    cout<<"DHROOOOOOOM DHROMMMMM"<<endl;
}
};
int main() {
    Bike b1;
    b1.sound();
    Scooty s;
    s.sound();

    Bike *b = new Bike();
    b->sound();
    return 0;

    Scooty *c = new Bike();
    c->sound();

    vector <Scooty*> v;  
}