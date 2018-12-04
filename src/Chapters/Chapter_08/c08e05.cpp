#include "myTime.h"
#include <iostream>
using namespace std;

void c08e05()
{
    myTime t1(1, 1, 59);
    t1++.display();
    t1.display();
    cout<<"postfix ok!\n";
    (++t1).display();
    t1.display();
    cout<<"prefix ok!\n";
    cout<<"all good chief! :)\n";
};