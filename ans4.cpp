// Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time
#include<iostream>
using namespace std;
class time{
    int hours,seconds,minute;
    public:
    time operator >>(time t){
    cout<<"Enter first TIme:"<<endl;
    cout<<"Hours minutes second:"<<endl;
    cin>>t.hours;
    cin>>t.minute;
    cin>>t.seconds;
    return t;
    }
    time operator ==(time t){
        if(hours==t.hours && minute==t.minute&& seconds==t.seconds){
            cout<<"Time are Same:";
        }
        else
        cout<<"Time are not same:";
    }
    void operator<<(time t){
        cout<<"*********************"<<endl;
       cout<<"Hours:"<<t.hours<<endl;
       cout<<"Minutes:"<<t.minute<<endl;
       cout<<"Seconds:"<<t.seconds<<endl;
        cout<<"*********************"<<endl;

    }
};
int main(){
    int h,m,s,h1,m1,s1;
    time t1,t2,cout1,cin1,t3,t4;
    t3=cin1>>(t2);
    cout1<<(t3);
    t4=cin1>>t1;
    cout1<<t4;
    t3==t4;

    return 0;
}