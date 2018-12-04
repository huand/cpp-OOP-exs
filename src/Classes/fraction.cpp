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
    reduc();
}

void fraction::show()
{
    reduc();
    cout << n << '/' << d;
}
void fraction::reduc()
{
    int x = n > d ? d : n;
    while (x > 1)
    {
        if (d % x == 0 && n % x == 0)
        {
            d /= x;
            n /= x;
            break;
        }
        else
        {
            x--;
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
    d = f2.d * f1.d;
    n = (f1.n * f2.d + f2.n * f1.d);
    reduc();
}
void fraction::fsub(fraction f1, fraction f2)
{
    fraction res;
    n = (f1.n * f2.d - f2.n * f1.d);
    d = f2.d * f1.d;
    reduc();
}
void fraction::fmul(fraction f1, fraction f2)
{
    n = f1.n * f2.n;
    d = f2.d * f1.d;
    reduc();
}
void fraction::fdiv(fraction f1, fraction f2)
{
    fraction res;
    n = f1.n * f2.d;
    d = f1.d * f2.n;
    reduc();
}

fraction fraction::operator*(fraction f)
{
    return fraction(n * f.n, d * f.d);
}

fraction fraction::operator/(fraction f)
{
    return fraction(n * f.d, d * f.n);
}

fraction fraction::operator+(fraction f)
{
    int N, D;
    D = d * f.d;
    N = (n * f.d + f.n * d);
    return fraction(N, D);
}

fraction fraction::operator-(fraction f)
{
    int N, D;
    D = d * f.d;
    N = (n * f.d - f.n * d);
    return fraction(N, D);
}

bool fraction::operator==(fraction f)
{
    return (d==f.d && n==f.n);
}

bool fraction::operator!=(fraction f)
{
    return (d!=f.d || n!=f.n);
}