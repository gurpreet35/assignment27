// Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class simple{
    int r;
    public:
    simple(){}
    simple(int r1){
        r=r1;
    }
    simple operator ++(){
        simple temp;
        temp.r=r+1;
        return temp;
    }
   simple operator --(){
        simple temp;
        temp.r=r-1;
        return temp;
    }
    void display(){
        cout<<"value is : "<<r<<endl;
    }
            
};
int main(){
    simple c2(5),c3,c1(5);
    c3=c2.operator++();
    c3.display();
    c3=c1.operator--();
    c3.display();
    return 0;
}