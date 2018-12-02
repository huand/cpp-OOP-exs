#include "fraction.h"
#include <iostream>
using namespace std;

void fraction::getfraction()
{
    cout << "enter fraction (format 2/5): ";
    char c;
    cin >> n >> c >> d;
}
fraction::fraction(int num, int den)
{
    n = num;
    d = den;
}

void fraction::show()
{
    reduc();
    cout << n << '/' << d;
}
void fraction::reduc()
{
    int x = 2;
    while (x <= d && x <= n)
    {
        if (d % x == 0 && n % x == 0)
        {
            d /= x;
            n /= x;
            x = 2;
        }
        else
        {
            x++;
        }
    }
}

fraction::fraction(/* args */)
{
}

fraction::~fraction()
{
}

void fraction::fadd(fraction f1, fraction f2)
{
    n = (f1.n * f2.d + f2.n * f1.d);
    d = f2.d * f1.d;
}
void fraction::fsub(fraction f1, fraction f2)
{
    fraction res;
    n = (f1.n * f2.d - f2.n * f1.d);
    d = f2.d * f1.d;
}
void fraction::fmul(fraction f1, fraction f2)
{
    n = f1.n * f2.n;
    d = f2.d * f1.d;
}
void fraction::fdiv(fraction f1, fraction f2)
{
    fraction res;
    n = f1.n / f2.n;
    d = f1.d / f2.d;
}