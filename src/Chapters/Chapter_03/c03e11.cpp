#include <iostream>
using namespace std;

void c03e11()
{
    cout << "enter an operation between two amount of old style english currency:\n";
    int p1, p2, s1, s2, c1, c2, P, S, C;
    char op, pt;
    cin >> p1 >> pt >> s1 >> pt >> c1 >> op >> p2;

    if (op == '+' || op == '-')
    {
        cin >> pt >> s2 >> pt >> c2;
        switch (op)
        {
        case '+':
            C = c1 + c2;
            if (C > 19)
            {
                C -= 20;
                s1++;
            }
            S = s1 + s2;
            if (S > 11)
            {
                S -= 12;
                p1++;
            }
            P = p1 + p2;
            break;
        case '-':
            C = c1 - c2;
            if (C < 0)
            {
                C += 20;
                s1--;
            }
            S = s1 - s2;
            if (S < 0)
            {
                S += 12;
                p1--;
            }
            P = p1 - p2;
            break;
        default:
            break;
        }
    }

    else if (op == '*')
    {
        C = c1 * p2;
        int r=0;
        while (C > 19)
        {
            C -= 20;
            r++;
        }
        S = s1 * p2;
        S+=r;
        r=0;
        while (S > 11)
        {
            S -= 12;
            r++;
        }
        P = p1 * p2;
        P+=r;
    }
    cout << "result: " << P << '.' << S << '.' << C << endl;
}