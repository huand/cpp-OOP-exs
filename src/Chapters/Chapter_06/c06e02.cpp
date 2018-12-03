#include "tollbooth.h"
#include <iostream>
using namespace std;

void c06e02()
{
    tollbooth toll;
    char c;
    cout << "Enter 1 for paying car\n"
         << "Enter 0 for non paying car\n"
         << "Enter 3 for display current tollbooth status\n"
         << "Press ESC to quit: ";
    do
    {

        cin >> c;
        switch (c)
        {
        case '1':
            toll.payingCar();
            break;
        case '0':
            toll.nopayCar();
            break;
        case '3':
            toll.display();
            break;
        }
    } while (c != ESC);
}