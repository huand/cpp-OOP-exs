#include <iostream>
using namespace std;

void c02e01()
{
    const float cubicfoot2gallon = 7.481;
    cout << "enter number of gallons: ";
    float gallon;
    cin >> gallon;
    cout << "\n= " << gallon / cubicfoot2gallon << " cubic foot\n";
}
