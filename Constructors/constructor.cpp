#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll_np;
        float cgpa;
        int age;
        //
        Student(){

        }
        Student(string s, int r, float g, int a){
            name = s;
            roll_np = r;
            cgpa = g;
            age = a;
        }
        
};


int main() {
    
    Student s1("Vansh", 59, 8.2,22);
    Student s2;
    

    return 0;
}