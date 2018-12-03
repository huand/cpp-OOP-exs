#include "matrix.h"
#include <iostream>
using namespace std;

int matrix::getel(int m, int n)
{
    if (m < MAXSIZE && n << MAXSIZE)
    {
        return arr[m][n];
    }
    else
    {
        cout << "out of bounds\n";
        exit(1);
    }
}

void matrix::putel(int m, int n, int v)
{
    if (m < r && n << c)
    {
        arr[m][n] = v;
    }
    else
    {
        cout << "out of bounds\n";
        exit(1);
    }
}

matrix::matrix()
{
}
matrix::matrix(int m, int n)
{
    r = m;
    c = n;
}

matrix::~matrix()
{
}
