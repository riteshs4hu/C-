#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Frist Number"<<endl;
    cin>>a;
    cout<<"Enter Second Number"<<endl;
    cin>>b;
    cout<<"\nBefore Swapping"<<endl;
    cout<<"Frist Value is = "<<a<<endl;
    cout<<"Second value is = "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"\nAfter Swapping"<<endl;
    cout<<"Frist Value is = "<<a<<endl;
    cout<<"Second Value is = "<<b<<endl;
    return 0;
}
