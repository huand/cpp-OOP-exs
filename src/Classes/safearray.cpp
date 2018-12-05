#include <iostream>
using namespace std;
#include "safearray.h"

safearray::safearray(/* args */)
{
    limmin = 0;
    limmax = LIMIT - 1;
}

safearray::~safearray()
{
}

safearray::safearray(int i, int j)
{
    if (i < 0 || j >= LIMIT)
    {
        cout<<"index out of bounds\n";
        exit(-1);
    }
    limmin = i;
    limmax = j;
}

void safearray::putel(int index, int value)
{
    if (index >= limmin && index < limmax)
    {
        array[index] = value;
    }

    else
    {
        cout << "Out of bounds lol!\n";
        exit(-1);
    }
}
int safearray::getel(int index)
{
    if (index >= limmin && index < limmax)
    {
        return array[index];
    }

    else
    {
        cout << "Out of bounds lol!\n";
        exit(-1);
        /* code */
    }
}

int &safearray::operator[](int n)
{
    if (n<limmin || n>limmax){
        cout<<"index out of bounds\n";
        exit(-1);
    }
    return array[n];
}