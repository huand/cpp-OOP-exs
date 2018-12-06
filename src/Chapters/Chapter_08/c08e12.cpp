#include "bMoney.h"
#include "sterling.h"

void c08e12(){
    sterling s(2.5);
    bMoney b(50);

    sterling s2=b;
    s2.putSterling();
    b=s;
    b.putmoney();
}