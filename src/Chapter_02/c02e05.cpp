#include <iostream>
#include <ctype.h>
using namespace std;

void c02e05()
{
    cout << "enter a letter:";
    char n;
    cin >> n;
    if (islower(n))
    {
        cout << " is a lower case";
    }
    else
    {
        cout << " is a upper case";
    }
    cout << endl;
}