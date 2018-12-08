#include "myStringP2.h"
using namespace std;

myStringP2::myStringP2() : myStringP() {}
myStringP2::myStringP2(string s) : myStringP(s) {}
myStringP2 myStringP2::left(string s, int i)
{
    myStringP2 t = myStringP2(s);
    t.str[i] = '\0';
    return t;
}
myStringP2 myStringP2::mid(string s, int start, int n)
{
    myStringP2 t;
    for (int k = 0; k < n; k++)
    {
        t.str[k] = s[k + start-1];
    }
    t.str[n] = '\n';
    return t;
}
myStringP2 myStringP2::right(string s, int n)
{
    myStringP2 t;
    int l = s.length();
    for (int k = 0; k < n; k++)
    {
        t.str[k] = s.at(l-n+k);
    }
    t.str[n] = '\0';
    return t;
}