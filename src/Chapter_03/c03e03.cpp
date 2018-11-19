#include <iostream>
#include <string>
using namespace std;

void c03e03()
{
    string str;
    cout<<"please enter a number:\n";
    cin >> str;
    int length = str.length();
    int n = 0;
    for (int l = 0; l < length; l++)
    {
        int k = str.at(l) - '0';
        for (int p = 0; p < (length - l - 1); p++)
        {
            k *= 10;
        }
        n += k;
    }
    cout << n << endl;
}