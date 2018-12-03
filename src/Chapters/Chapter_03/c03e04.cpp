#include <iostream>
using namespace std;

void c03e04()
{
    char yn;
    do
    {
        cout << "Enter first number, operator, second number: ";
        float n1, n2;
        char c;
        cin >> n1 >> c >> n2;
        cout << "answer = ";
        float res;
        switch (c)
        {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 + n2;
            break;
        default:
            cout << "input error";
            break;
        }
        cout << res << endl;
        do
        {
            cout << "do another operation? (y/n): ";
            cin >> yn;
        } while (!(yn == 'y' || yn == 'Y' || yn == 'N' || yn == 'n'));
    } while (yn == 'y' || yn == 'Y');
}