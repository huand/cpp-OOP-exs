#include <iostream>
using namespace std;

const double TOLL = 0.5;
const char ESC = 27;
class tollbooth
{
  private:
    unsigned int cars;
    double money;

  public:
    tollbooth();
    ~tollbooth();
    void payingCar();
    void nopayCar();
    void display() const;
};

void c06e02()
{
    tollbooth toll;
    char c;
    cout << "Enter 1 for paying car\n"
         << "Enter 0 for non paying car\n"
         << "Enter 3 for display current tollbooth status\n"
         << "Press ESC to quit: ";
    do
    {

        cin >> c;
        switch (c)
        {
        case '1':
            toll.payingCar();
            break;
        case '0':
            toll.nopayCar();
            break;
        case '3':
            toll.display();
            break;
        }
    } while (c != ESC);
}

tollbooth::tollbooth()
{
    cars = 0;
    money = 0;
}
tollbooth::~tollbooth() {}
void tollbooth::payingCar()
{
    cars++;
    money += TOLL;
}
void tollbooth::nopayCar()
{
    cars++;
}
void tollbooth::display() const
{
    cout << "total amount of cars: " << cars << endl;
    cout << "total amount of money: " << money << endl;
}