#include <iostream>
#include "myInt.h"
#include "limits.h"
using namespace std;

myInt::myInt()
{
    d = 0;
}

myInt::~myInt()
{
}
myInt::myInt(int i)
{
    d = i;
}
myInt myInt::add(myInt a)
{
    return myInt(d + a.d);
}
void myInt::showdata()
{
    cout << "data= " << d << endl;
}

myInt myInt::operator+(myInt a)
{
    int r = d + a.d;
    int m;
    if (d > 0)
    {
        m = INT_MAX - d;
        if (a.d > m)
        {
            cout << "positive integer overflow\n";
            exit(-1);
        }
    }
    else
    {
        m = INT_MIN - d;
        if (a.d < m)
        {
            cout << "negative integer overflow\n";
            exit(-1);
        }
    }
    return myInt(r);
}
myInt myInt::operator-(myInt a)
{
    return *this + myInt(-a.d);
}
myInt myInt::operator*(myInt a)
{
    int r = d * a.d;
    int A = a.d > 0 ? a.d : -a.d;
    int D = d > 0 ? d : -d;
    if (r != 0)
    {
        if (INT_MAX / A < D)
        {
            cout << "integer overflow\n";
            exit(-1);
        }
    }
    return myInt(r);
}
myInt myInt::operator/(myInt a)
{
    return myInt(d / a.d);
}