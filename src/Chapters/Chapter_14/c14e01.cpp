#include <iostream>
using namespace std;

template <class T>
T averate(T *t, int n)
{
    T y = 0;
    for (int i = 0; i < n; i++)
    {
        y += t[i];
    }
    return y / n;
}

void c14e01()
{
    int n = 3;
    int arri[] = {0, 100, 1000};
    cout << averate(arri, 3) << endl;
    double arrd[] = {1.2, 1.4, 1.35};
    cout << averate(arrd, 3) << endl;
}