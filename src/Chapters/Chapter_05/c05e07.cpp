#include <iostream>
using namespace std;

double power(double n, int p = 2);
char power(char n, int p = 2);
int power(int n, int p = 2);
long power(long n, int p = 2);
float power(float n, int p = 2);

void c05e07()
{
    double d = 1.2;
    char c = 3;
    int i = 4;
    long l = 5;
    float f = 1.22;

    cout << power(d) << endl;
    cout << static_cast<int>(power(c,3)) << endl;
    cout << power(i) << endl;
    cout << power(l) << endl;
    cout << power(f) << endl;
    cout << sizeof(short) << endl;
}

double power(double n, int p)
{
    double res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}

char power(char n, int p)
{
    char res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}

int power(int n, int p)
{
    int res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}

long power(long n, int p)
{
    long res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}

float power(float n, int p)
{
    float res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}