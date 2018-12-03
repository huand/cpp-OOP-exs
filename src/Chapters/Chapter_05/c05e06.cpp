#include <iostream>
using namespace std;

struct timeStr
{
    int hours, minutes, secondes;
};

long hms_to_secs(timeStr);

timeStr secs_to_time(long);

void c05e06()
{
    timeStr t1, t2, t3;
    cout << "enter 2 times is format 12:59:59: \n"
         << "time1: ";
    char c;
    cin >> t1.hours >> c >> t1.minutes >> c >> t1.secondes;
    cout << "time2: ";
    cin >> t2.hours >> c >> t2.minutes >> c >> t2.secondes;
    long sec = hms_to_secs(t1) + hms_to_secs(t2);
    t3=secs_to_time(sec);
    cout << "time1 + time2 = ";
    if (t3.hours < 10)
        cout << "0";
    cout << t3.hours << ":";
    if (t3.minutes < 10)
        cout << "0";
    cout << t3.minutes << ":";
    if (t3.secondes < 10)
        cout << "0";
    cout << t3.secondes << endl;
}


long hms_to_secs(timeStr t)
{
    return t.hours * 3600 + t.minutes * 60 + t.secondes;
}

timeStr secs_to_time(long sec)
{
    timeStr t3;
    t3.secondes = sec % 60;
    t3.minutes = (sec - t3.secondes) / 60 % 60;
    t3.hours = sec / 3600;
    return t3;
}