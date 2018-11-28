#include <iostream>
using namespace std;

class part
{
  private:
    static int count;
    int serial;

  public:
    part();
    void display() const;
    ~part();
};

void c06e08()
{
    part p1;
    part p2, p3, p4, p5;
}

int part::count = 0;
void part::display() const
{
    cout << "I am object number " << serial << endl;
}
part::part()
{
    serial = ++count;
    display();
}

part::~part()
{
}
