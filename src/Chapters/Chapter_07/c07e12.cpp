#include <iostream>
#include "bMoney.h"
using namespace std;

void c07e12()
{
    bMoney m1, m2, m3;
    char yn;
    do
    {
        m1.getmoney();
        m2.getmoney();
        m3.madd(m1, m2);
        m3.putmoney();
        cout << "Do you want to do it again? (y/n): ";
        cin >> yn;
        cin.ignore();
    } while (yn == 'y');
}