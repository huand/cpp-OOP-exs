#include <iostream>
#include "fraction.h"
using namespace std;

void c06e09()
{
    fraction f1(1,2);
    fraction f2,f3;
    f2.getfraction();
    f2.fadd(f1,f2);
    f2.show();
}