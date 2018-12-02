#include "angle.h"
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