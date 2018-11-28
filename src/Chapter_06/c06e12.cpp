#include <iostream>
using namespace std;

class fraction
{
  private:
    int n;
    int d;

  public:
    fraction();
    fraction(int, int);
    ~fraction();
    void getfraction();
    void fadd(fraction f1, fraction f2);
    void fsub(fraction f1, fraction f2);
    void fmul(fraction f1, fraction f2);
    void fdiv(fraction f1, fraction f2);
    void reduc();
    void show();
};

void c06e12()
{
    int n = 6;
    fraction fy;
    cout<<'\t';
    for (int j = 1; j < n; j++)
    {
        fraction fj(j, n);
        fj.show();
        cout << '\t';
    }
    cout << endl;
    cout << "................."
         << "................."
         << "..........." << endl;
    for (int i = 1; i < n; i++)
    {
        fraction fi(i, n);
        fi.show();
        cout << '\t';
        for (int j = 1; j < n; j++)
        {
            fraction fj(j, n);
            fy.fmul(fi, fj);
            fy.show();
            cout << '\t';
        }
        cout << endl;
    }
}