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
    Cricketer* p1 = &c1;
    cout<<(*p1).runs<<endl;
    cout<<p1->name<<endl;
    
    return 0;
}