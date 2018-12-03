#include "Distance.h"
#include <iostream>
using namespace std;

void c07e03()
{
    int const N = 100;
    Distance d[N];
    Distance avg(0, 0.);
    char yn;
    int i = 0;
    do
    {
        d[++i-1].get();
        avg.mul(i-1);
        avg.add(d[i-1]);
        avg.div(i);
        cout << "Average distance: ";
        avg.disp();
        cout << endl
             << "Enter new distance? (y/n): ";
        cin >> yn;
    } while (i < N & yn == 'y');
}