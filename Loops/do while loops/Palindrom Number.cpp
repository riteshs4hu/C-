#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,r,rev2;
    cout<<"Enter A Value"<<endl;
    cin>>n;
    rev2=n;
    do
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(n>0);
    if (rev==rev2)
    {
        cout<<"This Number is Palindrom"<<endl;
    }
    else
    {
        cout<<"This Number is Not Palindrom"<<endl;
    }
    return 0;
}
