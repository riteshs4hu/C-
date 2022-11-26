
#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,r;
    cout<<"Enter A Value"<<endl;
    cin>>n; 
    for (;n>0;)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    cout<<"Rev Number is = " <<rev<<endl;
    
}
