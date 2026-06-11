#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll_np;
        float cgpa;
        int age;
        
};


int main() {
    
    Student s1;
    s1.name = "Vansh";
    cin>>s1.roll_np;
    s1.cgpa = 8.09;
    s1.age = 22;

    Student s2;
    s2.name = "Raghav";
    s2.roll_np = 49;
    s2.cgpa = 8.00;
    s2.age = 22;

    cout<<s1.name<<" "<<s1.age<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.age<<" "<<s2.cgpa<<endl;


    return 0;
}