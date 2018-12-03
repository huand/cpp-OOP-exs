#include <iostream>
using namespace std;

void zeroSmaller(int &n1, int &n2)
{
    if (n1 < n2)
        n1 = 0;

    else if (n2 < n1)
        n2 = 0;
}

void c05e03()
{
    int n1 = 2;
    int n2 = -5;
    zeroSmaller(n1, n2);
    cout << "n1= " << n1 << endl;
    cout << "n2= " << n2 << endl;
}