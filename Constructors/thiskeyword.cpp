#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public: 
        string name;
        int runs;

        Cricketer(string name, int runs){
            this->name = name;
            this->runs = runs;
        }

};
int main() {
    Cricketer c1("Virat Kohli",9230);
    Cricketer c2("AB De Villiers",8765);

    cout<<c1.name<<"-"<<c1.runs<<endl;
    cout<<c2.name<<"-"<<c2.runs<<endl;

    return 0;
}