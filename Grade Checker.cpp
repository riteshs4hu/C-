#include<iostream>
using namespace std;

int main()
{
    int hindi,english,maths,scince,chemistry,total;
    float percentage;
    cout<<"Enter Hindi Marks"<<endl;
    cin>>hindi;
    cout<<"Enter English Marks"<<endl;
    cin>>english;
    cout<<"Enter Maths Marks"<<endl;
    cin>>maths;
    cout<<"Enter Science Marks"<<endl;
    cin>>scince;
    cout<<"Enter Chemistry Marks"<<endl;
    cin>>chemistry;
    total=hindi+english+maths+scince+chemistry;
    cout<<"Total Marks is = "<<total<<endl;
    percentage=total/5;
    cout<<"Total Makrs with Percentage is = "<<(float)percentage<<endl;
    if (percentage>=90)
    {
        cout<<"A+";
    }
    else if(percentage>=80)
    {
        cout<<"A";
    }
    else if(percentage>=70)
    {
        cout<<"B+";
    }
    else if(percentage>=60)
    {
        cout<<"B";
    }
    else if(percentage>=50)
    {
        cout<<"C";
    }
    else
    {
        cout<<"Fail";
    }
    
    return 0;
}
