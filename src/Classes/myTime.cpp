#include "myTime.h"
#include<iostream>
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
}

myTime::~myTime()
{
}

void myTime::add(myTime t1, myTime t2)
{
    long secs = (t1.hours + t2.hours) * 3600 + (t1.minutes + t2.minutes) * 60 + t1.secondes + t2.secondes;
    secondes = secs % 60;
    minutes = secs / 60 % 60;
    hours = secs / 3600;
}

void myTime::display() const
{
    cout << "Time is : " << hours << ':' << minutes << ':' << secondes << endl;
}