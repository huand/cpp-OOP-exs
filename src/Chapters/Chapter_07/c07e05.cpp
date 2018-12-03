#include "fraction.h"
#include <iostream>
using namespace std;

void c07e05()
{
    int n;
    cout << "How many fraction do you want to average?: ";
    cin >> n;
    fraction f[n];
    fraction avg(0,1);
    for (int i = 0; i < n; i++)
    {
        f[i].getfraction();
        avg.fadd(avg,f[i]);
    }
    cout<<"sum is: ";
    avg.show();
    cout<<endl;
    avg.fdiv(avg,fraction(n,1));
    cout<<"average is: ";
    avg.show();
    cout<<endl;
}