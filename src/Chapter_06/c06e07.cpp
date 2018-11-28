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

void c06e07()
{
    angle a1(1, 2.3, 'W');
    a1.display();
    char yn;
    cout << "Do you want to Enter a new angle? (y/n): ";
    cin >> yn;

    while (yn == 'y')
    {
        angle a;
        a.getAngle();
        a.display();
        cout << "Do you want to Enter a new angle? (y/n): ";
        cin >> yn;
    }
}
angle::angle(int i, float f, char c)
{
    mDegrees = i;
    mMinutes = f;
    switch (c)
    {
    case 'W':
        mDirection = west;
        break;
    case 'E':
        mDirection = east;
        break;
    case 'N':
        mDirection = north;
        break;
    case 'S':
        mDirection = south;
        break;
    default:
        break;
    }
}
void angle::getAngle()
{
    cout << "Enter an angle (format 12\"11.01'W): ";
    char c;
    cin >> mDegrees >> c >> mMinutes >> c >> c;
    switch (c)
    {
    case 'W':
        mDirection = west;
        break;
    case 'E':
        mDirection = east;
        break;
    case 'N':
        mDirection = north;
        break;
    case 'S':
        mDirection = south;
        break;
    default:
        break;
    }
}

void angle::display() const
{
    cout << "angle is " << mDegrees << '\"' << mMinutes << '\'';

    switch (mDirection)
    {
    case north:
        cout << "N";
        break;
    case south:
        cout << 'S';
        break;
    case east:
        cout << 'E';
        break;
    case west:
        cout << 'W';
        break;

    default:
        break;
    }
    cout << endl;
}
angle::angle()
{
}

angle::~angle()
{
}
