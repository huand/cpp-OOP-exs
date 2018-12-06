#include "polar.h"
#include "math.h"

void c08e10(){
    polar p1(1,0),p2(1,M_PI_2),p3;
    p2=p1+p2;
    p2.display();
}