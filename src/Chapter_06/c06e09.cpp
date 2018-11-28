#include <iostream>
using namespace std;

class fraction
{
  private:
    int numerator;
    int denominator;

  public:
    fraction();
    fraction(int, int);
    ~fraction();
    void getfraction();
    void display() const;
    void add(fraction, fraction);
};
void c06e09()
{
    fraction f1(1,2);
    fraction f2,f3;
    f2.getfraction();
    f2.add(f1,f2);
    f2.display();
}
fraction::fraction(int i1, int i2)
{
    numerator = i1;
    denominator = i2;
}
void fraction::add(fraction f1, fraction f2)
{
    numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    denominator = f1.denominator * f2.denominator;
}
void fraction::getfraction()
{
    cout << "enter fraction (format 2/5): ";
    char c;
    cin >> numerator >> c >> denominator;
}
void fraction::display() const
{
    cout << "fraction: " << numerator << '/' << denominator << endl;
}
fraction::fraction()
{
}

fraction::~fraction()
{
}
