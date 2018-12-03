#include <iostream>
using namespace std;
struct fraction
{
    int n;
    int d;
};

fraction fadd(fraction f1, fraction f2);
fraction fsub(fraction f1, fraction f2);
fraction fmul(fraction f1, fraction f2);
fraction fdiv(fraction f1, fraction f2);

void c05e12()
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
            res = fadd(f1, f2);
            break;
        case '-':
            res = fsub(f1, f2);
            break;
        case '*':
            res = fmul(f1, f2);
            break;
        case '/':
            res = fdiv(f1, f2);
            break;
        default:
            break;
        }
        cout << "result= " << res.n << "/" << res.d << endl;
        cout << "carry another operation? (y/n)";
        cin >> yn;
    } while (yn == 'y');
}

fraction fadd(fraction f1, fraction f2)
{
    fraction res;
    res.n = (f1.n * f2.d + f2.n * f1.d);
    res.d = f2.d * f1.d;
    return res;
}

fraction fsub(fraction f1, fraction f2)
{
    fraction res;
    res.n = (f1.n * f2.d - f2.n * f1.d);
    res.d = f2.d * f1.d;
    return res;
}
fraction fmul(fraction f1, fraction f2)
{
    fraction res;
    res.n = f1.n * f2.n;
    res.d = f2.d * f1.d;
    return res;
}
fraction fdiv(fraction f1, fraction f2)
{
    fraction res;
    res.n = f1.n / f2.n;
    res.d = f1.d / f2.d;
    return res;
}