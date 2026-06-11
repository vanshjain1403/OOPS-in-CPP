#include <bits/stdc++.h>
using namespace std;

class Student{
    public :
    int rno;
    string name;
    
    Student(int rno, string name, float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    Student(){}
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    float getmarks(){//getter
        return marks;
    }

    void setmarks(int marks){//setter
        this->marks = marks;
    }
    private:
    float marks;

    
    
};
int main() {
    Student s1(435, "Vansh", 99.99);
    Student s2;
    s2.name = "Vansh";
    s2.rno = 500123435;
    s2.display();

}