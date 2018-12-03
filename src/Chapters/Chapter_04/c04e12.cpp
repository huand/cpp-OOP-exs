#include <iostream>
using namespace std;
struct fraction
{
    int n;
    int d;
};

void c04e12()
{
    char yn;
    do
    {
        cout << "please type in an operation on fraction (ex 4/2+5/6):\n";
        fraction f1, f2, res;
        char f, op;
        cin >> f1.n >> f >> f1.d >> op >> f2.n >> f >> f2.d;

        switch (op)
        {
        case '+':
            res.n = (f1.n * f2.d + f2.n * f1.d);
            res.d = f2.d * f1.d;
            break;
        case '-':
            res.n = (f1.n * f2.d - f2.n * f1.d);
            res.d = f2.d * f1.d;
            break;
        case '*':
            res.n = f1.n * f2.n;
            res.d = f2.d * f1.d;
            break;
        case '/':
            res.n = f1.n / f2.n;
            res.d = f1.d / f2.d;
            break;
        default:
            break;
        }
        cout << "result= " << res.n << "/" << res.d << endl;
        cout << "carry another operation? (y/n)";
        cin >> yn;
    } while (yn == 'y');
}