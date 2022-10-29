// Define a C++ class fraction
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
#include <iostream>
using namespace std;
class fraction
{
    
    long numerator;
    long denominator;

public:
    fraction()
    {
        numerator = 0;
        denominator = 0;
    }
    void setdata()
    {
        cout << "Enter fraction :" << endl;
        cout << "Numerator : ";
        cin >> numerator;
        cout << "Denominator :";
        cin >> denominator;
    }
    void display(){
        cout<<numerator<<"/"<<denominator<<endl;

    }
    fraction operator ++(){
        fraction f;
        f.numerator=++numerator;
        f.denominator=++denominator;
        return f;
    }
    fraction operator ++(int dummy){
        fraction f;
         f.numerator=numerator++;
        f.denominator=denominator++;
        return f;
    }
};
int main()
{
    fraction f1,f2,f3;
    f1.setdata();
    f1++;
    cout<<"f1++ :";
    f1.display();
    ++f1;
    cout<<"++f1 :";
    f1.display();
    f2=++f1;
    cout<<"f2=++f1\n";
    cout<<"f1:";
    f1.display();
    cout<<"f2:";
    f2.display();
    f2=f1++;
    cout<<"f2=f1++\n";
    cout<<"f1:";
    f1.display();
    cout<<"f2:";
    f2.display();
    return 0;
}
