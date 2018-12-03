#include<iostream>
using namespace std;


struct employee
{
    int number;
    float compensation;
};

void c04e04(){
    const int n_emp=3;
    employee arr_emp[n_emp];
    for(int i = 0; i < n_emp; i++)
    {
        cout<<"Enter employee "<< i<<" number and compensation (ex 32 123.4):";
        cin>>arr_emp[i].number>>arr_emp[i].compensation;
    }
    for(int i = 0; i < n_emp; i++)
    {
        cout<<"Employee "<< i<<" number: "<< arr_emp[i].number<<" and compensation "<<arr_emp[i].compensation<<endl;
    }
}
