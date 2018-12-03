#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void c05e08()
{
    int a = 1, b = 2;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
}