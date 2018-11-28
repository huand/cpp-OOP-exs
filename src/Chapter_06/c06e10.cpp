#include <iostream>
using namespace std;

enum direction
{
    north,
    south,
    east,
    west
};

class angle
{
  private:
    int mDegrees;
    float mMinutes;
    direction mDirection;

  public:
    angle();
    angle(int, float, char);
    ~angle();
    void getAngle();
    void display() const;
};

struct location
{
    angle lat;
    angle lon;
};

class ship
{
  private:
    static int nship;
    int number;
    location loc;

  public:
    ship(/* args */);
    ~ship();
    void getPosition();
    void display() const;
};

void ship::getPosition()
{
    cout << "Lattitude"<<number<<": ";
    angle a1;
    a1.getAngle();
    loc.lat = a1;
    cout << "Longitude"<<number<<": ";
    angle a2;
    a2.getAngle();
    loc.lon = a2;
}
void ship::display() const
{
    cout << "####################" << endl
         << "ship number: " << number << endl
         << "ship location: lat=";
         loc.lat.display();
         cout << "lon=";
         loc.lon.display();
}
void c06e10()
{
    ship s1,s2,s3;
    s1.getPosition();
    s2.getPosition();
    s3.getPosition();
    s1.display();
    s2.display();
    s3.display();
}
int ship::nship = 0;
ship::ship(/* args */)
{
    number = ++nship;
}

ship::~ship()
{
}
