#include"myTime.h"
#include <iostream>
using namespace std;

void c06e03()
{
    myTime t1(1, 42, 3),t2(10, 20, 30);
    myTime t3;
    t3.display();
    t3.add(t1,t2);
    t3.display();
}