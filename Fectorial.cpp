#include<iostream>
using namespace std;

int main ()
{
    int f=1,a;
    cout<<"Enter A Number"<<endl;
    cin>>a;
    while(a>0)
    {
        f=f*a;
        a--;
    }
    cout<<"Fectorical Of Number is = "<<f<<endl;
    return 0;
}
