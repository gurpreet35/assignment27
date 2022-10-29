// Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
#include <iostream>
#include<cstring>
using namespace std;
class myString
{
    char str[100];

public:
    myString() {}
    myString(char s[] ){
        strcpy(str,s);
    }
    void display(){
        cout<<"Reverse of the string is:"<<endl;
        cout<<" "<<str<<endl;
    }
    myString operator !(){
        myString p;
        p=strrev(str); 
        return p;
    } 
};
int main()
{   
    char s[100];
    cout<<"Enter your string:"<<endl;
    cin>>s;
    myString s1(s),s2;
    s2=!s1;
    s2.display();
    return 0;
}