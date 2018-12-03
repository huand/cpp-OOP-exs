#include <iostream>
using namespace std;

int maxint(int[], int);

void c07e04()
{
    int n;
    cout << "how many integers?: ";
    cin >> n;
    int *x = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter integer " << i + 1 << " :";
        cin >> x[i];
    }
    int maxi = maxint(x, n);
    cout << "maximum integer is: " << x[maxi] << endl;
}

int maxint(int x[], int n)
{
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        max = x[max] > x[i] ? max : i;
    }
    return max;
}