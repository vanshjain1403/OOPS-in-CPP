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

};

void print(Cricketer c){
    cout<<c.name<<"-"<<c.runs<<" "<<c.avg<<endl;
}
int main() {
    Cricketer c1("Virat Kohli",9230,46.85);
    Cricketer c2("AB De Villiers",8765,50.66);

    print(c1);
    print(c2);

    return 0;
}