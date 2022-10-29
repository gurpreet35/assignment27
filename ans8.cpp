// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
#include<iostream>
using namespace std;
class Numbers
{
int a[3][3];
public:
   Numbers(){}
void setdata(){
    cout<<"Enter your matrix:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
}
void display(){
    cout<<"Your matrix is:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}
void operator -(Numbers n){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j]=-n.a[i][j];
        } 
    }
}
};
int main(){
    Numbers n1,n2;
    n1.setdata();
    n1.display();
    n2.operator-(n1);
    n2.display();
    return 0;
}