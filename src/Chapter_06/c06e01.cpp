#include <iostream>
using namespace std;

class Int
{
  private:
    int d;

  public:
    Int();
    Int(int);
    Int add(Int);
    void showdata();

    ~Int();
};

void c06e01()
{
    Int i1(100), i2(23), i3;
    i3 = i1.add(i2);
    i3.showdata();
}

Int::Int()
{
    d = 0;
}

Int::~Int()
{
}
Int::Int(int i)
{
    d = i;
}
Int Int::add(Int a)
{
    return Int(d + a.d);
}
void Int::showdata()
{
    cout << "data= " << d << endl;
}
