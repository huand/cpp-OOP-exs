#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
#include "myString.h"
//for exit()

myString::myString()
{
    strcpy(str, "");
}
myString::myString(char s[])
{
    strcpy(str, s);
}
void myString::display() const
{
    cout << str;
}
myString myString::operator+(myString ss) const
{
    myString temp;
    if (strlen(str) + strlen(ss.str) < SZ)
    {
        strcpy(temp.str, str);
        strcat(temp.str, ss.str);
    }
    else
    {
        cout << "\nString overflow";
        exit(1);
    }
    return temp;
}

void myString::operator+=(myString ss)
{
    if (strlen(str) + strlen(ss.str) < SZ)
    {
        strcat(str, ss.str);
    }
    else
    {
        cout << "\nString overflow";
        exit(1);
    }
}