// Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.

#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    complex() {}
    complex(int r1, int i1)
    {
        r = r1;
        i = i1;
    }
    friend complex operator+(complex c,complex d);
    void display()
    {
        cout << "Complex is : " << r << " +i " << i << endl;
    }
};
complex operator+(complex c,complex d)
{
    complex temp;
    temp.r = d.r + c.r;
    temp.i = d.i + c.i;
    return temp;
}
int main()
{
    complex c1(5, 10), c2(5, 4), c3;
    
    c3=c1+c2;
    c3.display();
    return 0;
}