#include "myInt.h"
#include <iostream>
using namespace std;

void c06e01()
{
    myInt i1(100), i2(23), i3;
    i3 = i1.add(i2);
    i3.showdata();
}