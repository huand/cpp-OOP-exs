#include "tollbooth.h"
#include <iostream>
using namespace std;

tollbooth::tollbooth()
{
    cars = 0;
    money = 0;
}
tollbooth::~tollbooth() {}
void tollbooth::payingCar()
{
    cars++;
    money += TOLL;
}
void tollbooth::nopayCar()
{
    cars++;
}
void tollbooth::display() const
{
    cout << "total amount of cars: " << cars << endl;
    cout << "total amount of money: " << money << endl;
}