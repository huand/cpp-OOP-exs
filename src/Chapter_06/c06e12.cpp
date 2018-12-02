#include <iostream>
#include "fraction.h"
using namespace std;

void c06e12()
{
    int n = 6;
    fraction fy;
    cout << '\t';
    for (int j = 1; j < n; j++)
    {
        fraction fj(j, n);
        fj.show();
        cout << '\t';
    }
    cout << endl;
    cout << "................."
         << "................."
         << "..........." << endl;
    for (int i = 1; i < n; i++)
    {
        fraction fi(i, n);
        fi.show();
        cout << '\t';
        for (int j = 1; j < n; j++)
        {
            fraction fj(j, n);
            fy.fmul(fi, fj);
            fy.show();
            cout << '\t';
        }
        cout << endl;
    }
}