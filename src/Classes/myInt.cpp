#include<iostream>
#include"myInt.h"
using namespace std;

myInt::myInt()
{
    d = 0;
}

myInt::~myInt()
{
}
myInt::myInt(int i)
{
    d = i;
}
myInt myInt::add(myInt a)
{
    return myInt(d + a.d);
}
void myInt::showdata()
{
    cout << "data= " << d << endl;
}
