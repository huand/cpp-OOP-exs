#include "myInt.h"
#include "limits.h"
#include <iostream>
using namespace std;

void c08e04(){
    myInt iM(INT_MAX/3),im(INT_MIN),i1(-20),i3;
    i3=iM*i1;
    i3.showdata();
}