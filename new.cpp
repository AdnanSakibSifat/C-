#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x=10,y=20,z=30, age;
    cout<<"your 1st value:"<<setw(6)<<x<<endl;
    cout<<"your 2nd value:"<<y<<endl;
    cout<<"your 3rd value:"<<z<<endl;

    cout<<"enter your age:";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are eligble for this party";
        break;
    case 16:
    cout<<"you are to young";
    break;
    case 30:
    cout<<"you are too older for this party";
    break;
    default:
    cout<<"you age is in our rules";
        break;
    }
    return 0;
}