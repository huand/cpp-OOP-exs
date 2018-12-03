#include "safearray.h"
#include <iostream>
using namespace std;

void c07e08()
{
    safearray sa1;
    int temp = 123;
    sa1.putel(100, temp);
    temp = sa1.getel(7);
    cout << temp << endl;
}