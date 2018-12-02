#include "angle.h"
#include <iostream>
using namespace std;

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
