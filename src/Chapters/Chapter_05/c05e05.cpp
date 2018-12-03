#include <iostream>
using namespace std;

struct timeStruct
{
    int hours, minutes, secondes;
};

long hms_to_secs(timeStruct t)
{
    return t.hours * 3600 + t.minutes*60 + t.secondes;
}

void c05e05()
{
    timeStruct t;
    char c;
    char yn;

    do
    {
        cout << "enter time (format 12:59:59): ";
        cin >> t.hours >> c >> t.minutes >> c >> t.secondes;
        cout << "Equivalent in secondes: " << hms_to_secs(t) << endl;
        cout << "Do you want to do it again (so much fun right?) (y/n): ";
        cin >> yn;
        cout << yn << endl;
    } while (yn == 'y');
}