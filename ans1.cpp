// Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include<iostream>
using namespace std;
class complex{
    int r,i;
    public:
    complex(){}
    complex(int r1,int i1){
        r=r1;
        i=i1;
    }
    complex operator +(complex c){
        complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return temp;
    }
    complex operator -(complex c){
        complex temp;
        temp.r=r-c.r;
        temp.i=i-c.i;
        return temp;
    }
    complex operator *(complex c){
        complex temp;
        temp.r=r*(c.r);
        temp.i=i*(c.i);
        return temp;
    }
    void operator ==(complex c){
        if(r==c.r && i==c.i){
            cout<<"Complex number's are equal"<<endl;
        }
        else
            cout<<"Complex number's are not equal"<<endl;
    }
    void display(){
        cout<<"Complex is : "<<r<<" +i "<<i<<endl;
    }

};
int main(){
    complex c7,c1(5,10),c2(5,4),c3,c4(5,4),c5,c6;
    c3=c1+c2;
    c5=c3-c2;
    c6=c2*c1;
    c2==c4;
    c3.display();
    c5.display();
    c6.display();
    return 0;
}