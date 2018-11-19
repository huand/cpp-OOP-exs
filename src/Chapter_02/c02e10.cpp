#include<iostream>
#include<iomanip>
using namespace std;

void c02e10(){
    int pounds,shillings,pence;
    cout<<"enter pounds: ";
    cin>>pounds;
    cout<<"enter shillings: ";
    cin>>shillings;
    cout<<"enter pence: ";
    cin>>pence;
    float Pounds;
    Pounds=pounds+shillings/20.+pence/12./20.;
    cout<<"decimal pounds: "<< '\x9c'<<setprecision(3)<<Pounds<<endl;
}