#include "sterling.h"
#include <iostream>
#include "math.h"
using namespace std;

sterling::sterling() : pounds(0), shillings(0), pence(0) {}
sterling::sterling(double d)
{
    pounds = 0;
    shillings = 0;
    pence = round(d * po2sh * sh2pe);
    simplify();
}
sterling::sterling(long pounds,
                   int shillings,
                   int pence) : pounds(pounds),
                                shillings(shillings),
                                pence(pence)
{
    simplify();
}
void sterling::getSterling()
{
    cout << "Enter old-style sterling (ex 12.4.11): ";
    char c;
    cin >> pounds >> c >> shillings >> c >> pence;
    simplify();
}
void sterling::putSterling()
{
    cout << "old style sterling amount: "
         << pounds << "."
         << shillings << '.'
         << pence << endl;
    simplify();
}
sterling sterling::operator+(sterling s)
{
    sterling y(pounds + s.pounds, shillings + s.shillings, pence + s.pence);
    return y;
}
sterling sterling::operator-(sterling s)
{
    sterling y(pounds - s.pounds, shillings - s.shillings, pence - s.pence);
    return y;
}
long sterling::sterling2pence()
{
    return pounds * po2sh * sh2pe + shillings * sh2pe + pence;
}
double sterling::operator/(sterling s)
{
    return static_cast<double>(sterling2pence()) / static_cast<double>(s.sterling2pence());
}
sterling sterling::operator/(double d)
{
    return sterling(0, 0, round(static_cast<double>(sterling2pence()) / d));
}
sterling sterling::operator*(double d)
{
    return sterling(0, 0, round(sterling2pence() * d));
}
void sterling::simplify()
{
    pence += shillings * sh2pe + pounds * po2sh * sh2pe;
    bool ispositive = pence > 0 ? true : false;
    pence = abs(pence);

    pounds = pence / po2sh / sh2pe;
    pence -= pounds * po2sh * sh2pe;
    shillings = pence / sh2pe;
    pence -= shillings * sh2pe;
    if (!ispositive)
    {
        pounds *= -1;
        shillings *= -1;
        pence *= -1;
    }
}
sterling::~sterling()
{
}

sterling::operator double()
{
    return static_cast<double>(pounds) + static_cast<double>(shillings) / po2sh + static_cast<double>(pence) / sh2pe / po2sh;
}

sterling::operator bMoney(){
    bMoney b(static_cast<long double>(50*double(*this)));
    return b;
}