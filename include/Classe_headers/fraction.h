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