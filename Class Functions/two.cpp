#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public: 
        string name;
        int runs;
        float avg;

        Cricketer(string name, int runs,float avg){
            this->name = name;
            this->runs = runs;
            this->avg = avg;
        }

        void print(string quality = "Batsmen"){
        cout<<name<<"-"<<this->runs<<" "<<avg<<endl;
        cout<<quality<<endl;
        }

        int matches(){
            return this->runs/this->avg;
        }

};


int main() {
    Cricketer c1("Virat Kohli",9230,46.85);
    Cricketer c2("AB De Villiers",8765,50.66);

    c1.print();
    cout<<c1.matches();
    cout<<endl;
    c2.print("WK and Batsmen");
    cout<<c2.matches();

    return 0;
}