#include "polar.h"
#include <iostream>
#include "math.h"
using namespace std;

polar::polar(/* args */) {}
polar::polar(double Rho, double Theta) : rho(Rho), theta(Theta) {}
polar polar::operator+(polar p) const
{
    double x = rho * cos(theta) + p.rho * cos(p.theta);
    double y = rho * sin(theta) + p.rho * sin(p.theta);
    double RHO = sqrt(pow(x, 2) + pow(y, 2));
    double THETA = atan2(y, x);
    return polar(RHO, THETA);
}
void polar::display() const
{
    cout << "rho: " << rho << ", theta= " << theta * 180 / M_PI << endl;
}
polar::~polar() {}