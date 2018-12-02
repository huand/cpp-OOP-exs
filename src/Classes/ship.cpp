#include "ship.h"
#include <iostream>
using namespace std;

void ship::getPosition()
{
    cout << "Lattitude"<<number<<": ";
    angle a1;
    a1.getAngle();
    loc.lat = a1;
    cout << "Longitude"<<number<<": ";
    angle a2;
    a2.getAngle();
    loc.lon = a2;
}
void ship::display() const
{
    cout << "####################" << endl
         << "ship number: " << number << endl
         << "ship location: lat=";
         loc.lat.display();
         cout << "lon=";
         loc.lon.display();
}
int ship::nship = 0;
ship::ship(/* args */)
{
    number = ++nship;
}

ship::~ship()
{
}