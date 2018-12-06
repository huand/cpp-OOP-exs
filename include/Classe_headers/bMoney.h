
#if !defined(BMONEY)
#define BMONEY
#include <iostream>
#include "sterling.h"

using namespace std;
class sterling;
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
  operator sterling();
};
#endif // BMONEY