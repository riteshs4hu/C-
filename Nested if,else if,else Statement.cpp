#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Frist Value"<<endl;
    cin>>a;
    cout<<"Enter Second Value"<<endl;
    cin>>b;
    cout<<"Enter Third Value"<<endl;
    cin>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"Frist Value is Greatest"<<endl;
        }
        else
        {
            cout<<"Third Value is Greatest"<<endl;
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            cout<<"Second value is Greatest"<<endl;
        }
        else  
        {
            cout<<"Third Value is Greatest"<<endl;
        }
    }
}
