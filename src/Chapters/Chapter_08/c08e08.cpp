#include "bMoney.h"
#include <iostream>
using namespace std;

void c08e08()
{
    char yn;
    do
    {
        bMoney b1, b2, b3;
        long double z;
        cout << "x: ";
        b1.getmoney();
        cout << "y :";
        b2.getmoney();
        cout << "enter a long double z: ";
        cin >> z;
        cin.ignore();
        b3 = b1 + b2;
        cout << "x+y= ";
        b3.putmoney();
        b3 = b1 - b2;
        cout << "x-y= ";
        b3.putmoney();
        b3 = b1 / b2;
        cout << "x/y= ";
        b3.putmoney();
        b3 = b1 / z;
        cout << "x/z= ";
        b3.putmoney();
        b3 = b1 * z;
        cout << "x*z= ";
        b3.putmoney();
        cout << "restart? (y/n): ";
        cin >> yn;
        cin.ignore();
    } while (yn == 'y');
}