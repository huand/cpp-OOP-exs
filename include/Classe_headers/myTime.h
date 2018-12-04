class myTime
{
private:
  int hours, minutes, secondes;

public:
  myTime();
  myTime(int, int, int);
  ~myTime();
  void display();
  void add(myTime, myTime);
  myTime operator+(myTime);
  myTime operator++();
  myTime operator++(int);
  myTime operator-(myTime);
  myTime operator*(float);
  void simplify();
};