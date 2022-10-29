// . Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings
#include<iostream>
#include<string.h>
using namespace std;
class CString{
    char str[10];
    public:
    CString(){}
    CString(char s[]){
        strcpy(str,s);
    }
    CString operator+(CString p){
        CString q;
        strcpy(q.str,strcat(str,p.str));
        return q;
    }
    CString (const CString &p){

        strcpy(str,p.str);
    }
    void operator ==(CString p){
        if(strcmp(str,p.str)==0){
            cout<<endl<<"Both Strings are same."<<endl;
        }
        else
         cout<<endl<<"Both Strings are not same."<<endl;
    }
    void display(){
        cout<<str;
    }
};
int main(){
    
    CString c1("hello"),c2("hello"),c3=c1+c2;     //copy constructur
    c3.display();           
    c1.operator==(c2);
    return 0;
}
