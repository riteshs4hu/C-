#include<iostream>
using namespace std;

int main()
{
    int a,b,choice,add,sub,mul,div;
    cout<<"Enter Any One Choice"<<endl;
    cout<<"1. Add\n2. Sub\n3. Mul\n4. Div"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter Two Value\n";
            cin>>a>>b;
            add = a+b;
            cout<<"Addition is "<<add;
            break;
        }
        case 2:
        {
            cout<<"Enter Two Value\n";
            cin>>a>>b;
            sub = a-b;
            cout<<"Subtract is "<<sub;
            break;
        }
        case 3:
        {
            cout<<"Enter Two Value\n";
            cin>>a>>b;
            mul = a*b;
            cout<<"Multiple is "<<mul;
            break;
        }
        case 4:
        {
            cout<<"Enter Two Value\n";
            cin>>a>>b;
            div = a/b;
            cout<<"Divide is "<<div;
            break;
        }

    }
}
