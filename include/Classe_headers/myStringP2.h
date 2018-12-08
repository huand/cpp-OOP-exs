#include "myStringP.h"


class myStringP2 : public myStringP
{
public:
    myStringP2();
    myStringP2(string);
    myStringP2 left(string, int);
    myStringP2 mid(string, int start, int n);
    myStringP2 right(string, int);
};