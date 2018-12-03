#include <iostream>
#include "angle.h"
using namespace std;

void c06e07()
{
    angle a1(1, 2.3, 'W');
    a1.display();
    char yn;
    cout << "Do you want to Enter a new angle? (y/n): ";
    cin >> yn;

    while (yn == 'y')
    {
        angle a;
        a.getAngle();
        a.display();
        cout << "Do you want to Enter a new angle? (y/n): ";
        cin >> yn;
    }
}
