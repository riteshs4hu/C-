#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter First Value"<<endl;
    cin>>a;
    cout<<"Enter Second Value"<<endl;
    cin>>b;
    if (a>b)
    {
        cout<<"A is Greater";
    }
    else if (b>a)
    {
        cout<<"B is Greater";
    }
    else
    {
        cout<<"A And B Both Are Same";
    }
}
