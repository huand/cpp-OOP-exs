#include <iostream>
using namespace std;

void c10e01()
{
    cout << "size of array: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value of element " << i << ": ";
        cin >> *(arr + i);
    }
    cout << "display of array:\n";
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i);
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]\n";
}
