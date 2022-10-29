// Overload the operator unary minus (-) to negate the numbers.
#include<iostream>
using namespace std;
class Numbers
{
int x,y,z;
public:
Numbers(){}
Numbers(int a,int b,int c){
    x=a;y=b;z=c;
}
void display(){
    cout<<"Number is: "<<x<<"  "<<y<<" "<<z<<endl;
}
void operator -(Numbers n){
    x=-n.x;
    y=-n.y;
    z=-n.z;
}
};
int main(){
    Numbers n1(5,6,7),n2;
    n2.operator-(n1);
    n2.display();
    return 0;
}