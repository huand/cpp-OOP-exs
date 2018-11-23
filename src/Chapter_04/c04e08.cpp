#include<iostream>
using namespace std;


struct fraction
{
    int n;
    int d;
};


void c04e08(){
    fraction f1,f2,f3;
    char c;
    cout<< "enter fraction 1: ";
    cin>>f1.n>>c>>f1.d;
    cout<< "enter fraction 2: ";
    cin>>f2.n>>c>>f2.d;
    f3.n=f1.n*f2.d+f2.n*f1.d;
    f3.d=f1.d*f2.d;
    cout<< "Sum: "<<f3.n<<"/"<<f3.d<<endl;
}