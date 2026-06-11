#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
        string name;
        int price;
        int seats;
        string type;

        Car(string s, int p, int st, string t){
            name = s;
            price = p;
            seats = st;
            type = t;

        }
        Car(int p, int st, string s, string t){
            name = s;
            price = p;
            seats = st;
            type = t;

        }

};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

void change(Car &c){
    c.name = "Audi";
    c.price = 150000000;
    c.seats = 2;
    c.type = "Sports Car";
}
int main() {
    Car c1(15,2365,"fjbr","fbhekb");
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type = "Sedan";

    print(c1);
    change(c1);

    cout<<"\n\n\n\n\n\n\n\n";

    
    Car c2("fjbr",15,52,"hceb");
    c2.name = "Maruti swift";
    c2.price = 700000;
    c2.seats = 5;
    c2.type = "Hatchback";

    Car c3("fjbr",15,52,"hfeb");
    c3.name = "Toyota Fotuner";
    c3.price = 3000000;
    c3.seats = 8;
    c3.type = "SUV";

    print(c1);
    print(c2);
    print(c3);

    Car c6 = c1;
    //deep copy

    Car c7(c6);
    //deep copy
    //copy constructor called for this

    return 0;
}