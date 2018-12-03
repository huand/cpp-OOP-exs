#include "matrix.h"
#include <iostream>
using namespace std;

void c07e10()
{
    matrix m1(3, 4);
    int temp = 1234;
    m1.putel(1, 2, temp);
    temp = m1.getel(1, 2);
    cout<<temp<<endl;
}