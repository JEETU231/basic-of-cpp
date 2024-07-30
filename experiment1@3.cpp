#include<iostream>
using namespace std;

int main()
{
    int maths,phy,python,C;
    int totalM;

    /*cout<<"Enter your maths marks: ";
    cin>>maths;                                     //taking input of all marks separately
    cout<<"Enter your physics marks: ";
    cin>>phy;
    cout<<"Enter your python marks: ";
    cin>>python;
    cout<<"Enter your C marks: ";
    cin>>C;*/

    cout<<"Enter your marks in the sequence(maths,physics,python,C programming): ";         //taking all marks input in one statement
    cin>>maths>>phy>>python>>C;

    totalM = (maths+phy+python+C)/4;                //calculating total marks and average
    cout<<"You have scored: "<<totalM<<"\n";

    if(totalM>=90)
    {
        cout<<"O grade.";
    }
    else if(totalM>=80)
    {
        cout<<"A grade.";
    }
    else if(totalM>=70)
    {
        cout<<"B grade.";
    }
    else if(totalM>=60)
    {
        cout<<"C grade.";
    }
    else if(totalM>=50)
    {
        cout<<"D grade.";
    }
    else if(totalM>=40)
    {
        cout<<"Pass.";
    }
    else{
        cout<<"Fail";
    }
}