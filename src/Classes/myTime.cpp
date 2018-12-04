#include "myTime.h"
#include <iostream>
#include <iomanip>
using namespace std;

myTime::myTime()
{
    hours = minutes = secondes = 0;
}
myTime::myTime(int hr, int mn, int sc)
{
    hours = hr;
    minutes = mn;
    secondes = sc;
    simplify();
}

myTime myTime::operator+(myTime t)
{
    int s = secondes + t.secondes;
    int m = minutes + t.minutes;
    int h = hours + t.hours;
    simplify();
    return myTime(h, m, s);
}

myTime::~myTime()
{
}

void myTime::add(myTime t1, myTime t2)
{
    secondes = t1.secondes + t2.secondes;
    minutes = t1.minutes + t2.minutes;
    hours = t1.hours + t2.hours;
    simplify();
}

void myTime::display()
{
    simplify();
    cout << "Time is : " << setfill('0')
         << setw(2) << hours << ':'
         << setw(2) << minutes << ':'
         << setw(2) << secondes << endl;
}

myTime myTime::operator++()
{
    return myTime(hours, minutes, ++secondes);
}

myTime myTime::operator++(int)
{
    return myTime(hours, minutes, secondes++);
}

void myTime::simplify()
{
    long s=secondes+minutes*60+hours*3600;
    hours=s/3600;
    minutes=s/60%60;
    secondes=s%60;
}

myTime myTime::operator-(myTime t)
{
    return myTime(hours - t.hours, minutes - t.minutes, secondes - t.secondes);
}

myTime myTime::operator*(float t)
{
    return myTime(hours * t, minutes * t, secondes * t);
}