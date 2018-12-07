#include "tape.h"
#include <iostream>
using namespace std;

tape::tape() : publication(), length(0) {}
tape::tape(float f) : publication(), length(f) {}
tape::tape(string str, float f1, float f2) : publication(str, f2), length(f2) {}
void tape::getdata()
{
    publication::getdata();
    sales::getdata();
    cout << "enter length: ";
    cin >> length;
    cin.ignore();
}
void tape::putdata()
{
    publication::putdata();
    sales::putdata();
    cout << ", length: " << length << " [min]" << endl;
    ;
}
