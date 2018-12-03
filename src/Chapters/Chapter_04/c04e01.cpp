#include <iostream>
using namespace std;

struct phonenumber
{
    int area;
    int exch;
    int numb;
};

void c04e01()
{
    phonenumber ph1, mynumb;
    mynumb = {111,222,333};
    cout << "Enter your area code, exchange, and number: ";
    cin >> ph1.area >> ph1.exch >> ph1.numb;
    cout << "My number is " << '(' << mynumb.area << ") "
         << mynumb.exch << '-' << mynumb.numb << endl;
    cout << "Your number is " << '(' << ph1.area << ") "
         << ph1.exch << '-' << ph1.numb << endl;
}