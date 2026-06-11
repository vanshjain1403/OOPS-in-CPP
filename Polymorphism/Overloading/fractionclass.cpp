#include <bits/stdc++.h>
using namespace std;
class Fraction{
    public:
    int num;
    int den;
    Fraction(int num, int den){
        this->num = num;
        this->den = den;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }
    Fraction operator+(Fraction f){
        int newnum = num*f.den + f.num*den;
        int newden = f.den*den;
        Fraction ans(newnum,newden);
        return ans;
    }

};
int main() {
    Fraction f1(1,2);
    Fraction f2(5,2);
    f1.display();
    f2.display();
    Fraction f3 = f1+f2;
    f3.display();
    return 0;
}