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

void c06e09()
{
    fraction f1(1,2);
    fraction f2,f3;
    f2.getfraction();
    f2.fadd(f1,f2);
    f2.show();
}