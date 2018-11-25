#include <iostream>
using namespace std;


struct timestruct
{
    int hours, minutes, secondes;
};


void swap(timestruct &a, timestruct &b)
{
    timestruct c = a;
    a = b;
    b = c;
}

void c05e09()
{
    timestruct a = {1,2,3}, b = {10,20,30};
    cout << a.hours << ":"<< a.minutes << ":"<< a.secondes << "|"<< b.hours << ":"<< b.minutes << ":"<< b.secondes <<endl;
    swap(a, b);
    cout << a.hours << ":"<< a.minutes << ":"<< a.secondes << "|"<< b.hours << ":"<< b.minutes << ":"<< b.secondes <<endl;
}