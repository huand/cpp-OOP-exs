#include <iostream>
#include "Distance.h"
using namespace std;

void Distance::mul(float d)
{
    inches += feet * 12;
    inches *= d;
    int r = inches / 12;
    feet = r;
    inches = inches - r * 12;
}
void Distance::div(float d)
{
    inches += feet * 12;
    inches /= d;
    int r = inches / 12;
    feet = r;
    inches = inches - r * 12;
}

void Distance::add(Distance d)
{
    inches += d.inches;
    feet += d.feet;
    int r = inches / 12;
    feet += r;
    inches = inches - r * 12;
}
void Distance::disp() const
{
    cout << feet << " feet, " << inches << " inches";
}
void Distance::get()
{
    cout << "enter english Distance (format feet,inches): ";
    char c;
    cin >> feet >> c >> inches;
}

Distance::Distance(/* args */)
{
}
Distance::Distance(int i, float f){
    feet=i;
    inches=f;
}

Distance::~Distance()
{
}
