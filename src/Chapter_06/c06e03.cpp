#include <iostream>
using namespace std;

class Time
{
  private:
    int hours, minutes, secondes;

  public:
    Time();
    Time(int, int, int);
    ~Time();
    void display() const;
    void add(Time, Time);
};

void c06e03()
{
    Time t1(1, 42, 3),t2(10, 20, 30);
    Time t3;
    t3.display();
    t3.add(t1,t2);
    t3.display();
}

Time::Time()
{
    hours = minutes = secondes = 0;
}
Time::Time(int hr, int mn, int sc)
{
    hours = hr;
    minutes = mn;
    secondes = sc;
}

Time::~Time()
{
}

void Time::add(Time t1, Time t2)
{
    long secs = (t1.hours + t2.hours) * 3600 + (t1.minutes + t2.minutes) * 60 + t1.secondes + t2.secondes;
    secondes = secs % 60;
    minutes = secs / 60 % 60;
    hours = secs / 3600;
}

void Time::display() const
{
    cout << "Time is : " << hours << ':' << minutes << ':' << secondes << endl;
}