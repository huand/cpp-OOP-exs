#include <iostream>
using namespace std;

struct date
{
    int day, month, year;
};

void c04e05()
{
    char s;
    date mydate;
    cout << "Enter a date (format dd/mm/yyyy): ";
    cin >> mydate.day >> s >> mydate.month >> s >> mydate.year;
    cout << "the date you entered is : "
         << mydate.day << '/' << mydate.month << '/' << mydate.year << endl;
}