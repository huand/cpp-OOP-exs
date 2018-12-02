#include "part.h"
#include <iostream>
using namespace std;

int part::count = 0;
void part::display() const
{
    cout << "I am object number " << serial << endl;
}
part::part()
{
    serial = ++count;
    display();
}

part::~part()
{
}
