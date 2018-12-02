#include "date.h"
#include <iostream>
using namespace std;

date::date()
{
    this->getdate();
}

void date::getdate()
{
    cout << "Enter date (dd/mm/yyyy): ";
    char c;
    cin >> mDay >> c >> mMonth >> c >> mYear;
}
void date::showdate() const
{
    cout << "Date is: " << mDay << '/'
         << mMonth << '/'
         << mYear << endl;
};
date::~date()
{
}
