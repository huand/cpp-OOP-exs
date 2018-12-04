class myInt
{
private:
  int d;

public:
  myInt();
  myInt(int);
  myInt add(myInt);
  void showdata();
  myInt operator+(myInt);
  myInt operator-(myInt);
  myInt operator*(myInt);
  myInt operator/(myInt);
  ~myInt();
};