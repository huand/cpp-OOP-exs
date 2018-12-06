#include "sterling.h"

void c08e11(){
    sterling s1(10,10,10),s2(2,2,2);
    s1=s2-s1;
    s1.putSterling();
}