#include <iostream>
using namespace std;

void c03e06()
{
    int N;
    do
    {
        cout << "Enter a number: ";

        cin >> N;
        int y = 1;
        for (int i = 1; i < N + 1; i++)
        {
            y *= i;
        }
        cout << N << "!=" << y<<endl;
    } while (N != 0);
}