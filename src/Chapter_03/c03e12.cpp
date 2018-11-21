#include <iostream>
using namespace std;

void c03e12()
{
    char yn;
    do
    {
        cout << "please type in an operation on fraction (ex 4/2+5/6):\n";
        int n1, d1, n2, d2;
        char op, f;
        cin >> n1 >> f >> d1 >> op >> n2 >> f >> d2;
        float res;
        switch (op)
        {
        case '+':
            res = (n1 * d2 + n2 * d1) / d2 / d1;
            break;
        case '-':
            res = (n1 * d2 - n2 * d1) / d2 / d1;
            break;
        case '*':
            res = n1 * n2 / d2 / d1;
            break;
        case '/':
            res = res = n1 / n2 * d2 / d1;
            break;
        default:
            break;
        }
        cout << "result= " << res << endl;
        cout << "carry another operation? (y/n)";
        cin >> yn;
    } while (yn == 'y');
}