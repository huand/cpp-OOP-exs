#include <iostream>
using namespace std;

double power(double n, int p = 2);

void c05e02()
{
    double  d=1.2;
    char    c=3;
    int     i=4;
    long    l=5;
    float   f=1.22;

    cout << power(d) << endl;
}

double power(double n, int p)
{
    double res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}