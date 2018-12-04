#include "myTime.h"

void c08e06()
{
    myTime t(0, 60, 1);
    t.display();
    t = t * 2;
    t.display();
    myTime t2(0, 0, 3);
    t = t - t2;
    t.display();
}