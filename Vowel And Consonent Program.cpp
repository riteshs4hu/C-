#include<iostream> 
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Any one Character\n"<<endl;
    cin>>ch;
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"This Character is Vowel";
    }
    else
    {
        cout<<"This Character is Consonent";
    }
}
