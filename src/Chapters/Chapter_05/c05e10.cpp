#include <iostream>
using namespace std;

void NumberOfCalls()
{
    static int q = 0;
    cout << ++q << endl;
}

void c05e10()
{

    for (int i = 0; i < 20; i++)
    {
        NumberOfCalls();
    }
}