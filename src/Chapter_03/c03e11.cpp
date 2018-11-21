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
        if (C > 19)
        {
            C -= 20;
        }
        S = s1 * p2;
        S--;
        if (S > 11)
        {
            S -= 12;
        }
        P = p1 * p2;
        P++;
    }
    cout << "result: " << P << '.' << S << '.' << C << endl;
    cout << p1 << '.' << s1 << '.' << c1 << '.' << p2 << '.' << s2 << '.' << c2 << '.' << endl;
}