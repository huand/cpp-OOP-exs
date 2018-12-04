#include <iostream>
using namespace std;
#include "safearray.h"

safearray::safearray(/* args */)
{
}

safearray::~safearray()
{
}

void safearray::putel(int index, int value)
{
    if (index >= 0 && index < LIMIT)
    {
        array[index] = value;
    }
    
    else
    {
        cout<<"Out of bounds lol!\n";;
    }
    
}
int safearray::getel(int index)
{
    if (index >= 0 && index < LIMIT)
    {
        return array[index];
    }
    
    else
    {
        cout<<"Out of bounds lol!\n";
        exit(-1);
        /* code */
    }
    
}