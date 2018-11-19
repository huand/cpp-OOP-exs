#include <iostream>
using namespace std;

void c03e07()
{
    cout << "Enter initial amount: ";
    float init;
    cin >> init;
    cout << "Enter number of years: ";
    int years;
    cin >> years;
    cout << "Enter interest rate (percent per yeara): ";
    float rate;
    cin >> rate;
    float res = init;
    for (int y = 0; y < years; y++)
    {
        res *= 1 + rate / 100;
    }
    cout << "At the end of " << years
         << " years, you will have " << res
         << " dollars." << endl;
}