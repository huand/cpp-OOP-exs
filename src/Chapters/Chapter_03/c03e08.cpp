#include <iostream>
using namespace std;

void c03e08()
{
    char yn;
    do
    {
        cout << "Enter first amount: ";
        int p1, s1, c1, p2, s2, c2, P, S, C;
        char c;
        cin >> p1 >> c >> s1 >> c >> c1;
        cout << "Enter second amount: ";
        cin >> p2 >> c >> s2 >> c >> c2;
        C = c1 + c2;
        if (C > 11)
        {
            C -= 12;
            s1 += 1;
        }
        S = s1 + s2;
        if (S > 19)
        {
            S -= 20;
            p1 += 1;
        }
        P = p1 + p2;
        cout << "Total is ";
        cout << P << "." << S << "." << C << endl;
        cout << "Do you wish to continue? (y/n)";
        cin>>yn;
    } while (yn == 'y');
}