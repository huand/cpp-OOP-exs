#include "myString.h"
#include <istream>
using namespace std;

void c08e02()
{
    char c1[4]="foo";
    char c2[4]="bar";
    myString s1(c1);
    myString s2(c2);
    s1 += s2;
    s1.display();
}