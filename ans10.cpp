// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
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
Numbers operator +(Numbers n){
    Numbers m;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m.a[i][j]=a[i][j]+n.a[i][j];
        } 
        cout<<endl;
    }
    return m;
}
};
int main(){
    Numbers n1,n2,n3;
    n1.setdata();
    n1.display();
    n2.setdata();
    n2.display();
    n3=n1+n2;
    n3.display();
    return 0;
}