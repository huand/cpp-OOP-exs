class myTime
{
private:
  int hours, minutes, secondes;

public:
  myTime();
  myTime(int, int, int);
  ~myTime();
  void display() const;
  void add(myTime, myTime);
  myTime operator+(myTime);
};