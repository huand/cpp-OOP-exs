#include <iostream>
using namespace std;
class bMoney
{
  private:
    long double money;

  public:
    bMoney(/* args */);
    bMoney(char[]);
    bMoney(long double);
    void madd(bMoney, bMoney);
    void getmoney();
    void putmoney();
    long double string2ld(string);
    bMoney operator+(bMoney);
    bMoney operator-(bMoney);
    bMoney operator*(long double);
    bMoney operator/(long double);
    long double operator/(bMoney);
    ~bMoney();
};