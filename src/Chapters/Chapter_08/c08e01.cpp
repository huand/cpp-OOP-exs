#include "Distance.h"
#include <iostream>
using namespace std;

void c08e01()
{
    Distance d1(3,2),d2(2,11);
    Distance d3 = d1-d2;
    d3.disp();
}