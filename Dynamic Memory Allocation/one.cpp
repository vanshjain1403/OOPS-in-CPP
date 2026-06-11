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
    int x = 6;
    int *p = &x;
    
    int *ptr = new int(4);
    cout<<*ptr<<endl;

    Cricketer* c1 = new Cricketer("Virat Kohli", 9230);
    cout<<c1->name<<endl;
    return 0;
}