#include "fraction.h"
#include <iostream>
using namespace std;

void c08e07(){
    fraction f1(2,3),f2(2,4);
    f1=(f1-f2);
    f1.show();
    cout<<"\nAll tests performed and ok!\n";
}