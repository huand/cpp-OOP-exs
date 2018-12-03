#include <iostream>
using namespace std;

void c03e05()
{
    int N;
    cout << "Choose the size of the pyramid: ";
    cin >> N;
    for (int h = 0; h < N; h++)
    {
        for (int s = 0; s < N - 1 - h; s++)
        {
            cout << ' ';
        }

        for (int i = 0; i < h*2-1; i++)
        {
            cout << "X";
        }
        cout << endl;
    }
}