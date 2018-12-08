#include "employee.h"
#include <iostream>
using namespace std;
enum period
{
    hourly,
    daily,
    weekly,
    monthly
};
class employee2 : private employee
{
  private:
    period wageperiod;

  public:
    void getdata();
    void putdata();
};

void employee2::putdata()
{
    fDisplay();
    cout << "wage is ";

    switch (wageperiod)
    {
    case hourly:
        cout << "hourly" << endl;
        break;
    case daily:
        cout << "daily" << endl;
        break;
    case weekly:
        cout << "weekly" << endl;
        break;
    case monthly:
        cout << "monthly" << endl;
        break;

    default:
        break;
    }
}

void employee2::getdata()
{
    employee::fGetData();
    cout << "Specify the wage period:\n"
         << "\thourly (h)\n"
         << "\tdaily (d)\n"
         << "\tweekly (w)\n"
         << "\tmonthly (m): ";
    char c;
    cin >> c;
    cin.ignore();

    switch (c)
    {
    case 'h':
        wageperiod = hourly;
        break;
    case 'd':
        wageperiod = daily;
        break;
    case 'w':
        wageperiod = weekly;
        break;
    case 'm':
        wageperiod = monthly;
        break;

    default:
        cout << "lol idiot\n";
    }
}