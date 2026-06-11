#include <bits/stdc++.h>
using namespace std;
class Vector{
    public:
    int size;
    int capacity;
    int * arr;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    Vector(int capacity){
        size = 0;
        this->capacity = capacity;
        arr = new int[capacity];
    }
     
    void add(int x){
        if(size==capacity){
            capacity*=2;
            int *arr2 = new int[capacity];
            for(int i = 0; i <size; i++){
                arr2[i] = arr[i];
            }
            delete[] arr;
            arr = arr2;
            arr2 = NULL;
        }
        arr[size++]=x;
    }

    int get(int index){
        if(index>=size || size==0 || index<0) return -1;
        return arr[index];
    }

    void print(){
        for(int i = 0; i <size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    void remove(){
        if(size==0){
            cout<<"Vector is empty already!"<<endl;
            return;
        }
        size--;
    }
    ~Vector() {
        delete[] arr;
    }
};
int main() {
    Vector v1(10);
    cout<<v1.capacity<<endl;
    cout<<v1.size<<endl;
    v1.add(50);
    cout<<v1.size<<endl;
    v1.add(5);
    cout<<v1.size<<endl;
    v1.add(40);
    cout<<v1.size<<endl;
    v1.add(78);
    cout<<v1.size<<endl;
    v1.add(16);
    cout<<v1.size<<endl;
    v1.add(98);
    cout<<v1.size<<endl;
    v1.add(14);
    cout<<v1.size<<endl;
    v1.add(16);
    cout<<v1.size<<endl;
    v1.add(46);
    cout<<v1.size<<endl;
    cout<<v1.capacity<<endl;
    
    v1.print();
    return 0;
}