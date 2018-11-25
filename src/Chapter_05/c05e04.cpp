#include <iostream>]
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance largestDistance(Distance d1, Distance d2)
{

    if (d1.feet != d2.feet)
        return d1.feet > d2.feet ? d1 : d2;
    else
        return d1.inches > d2.inches ? d1 : d2;
}

void c05e04()
{
    Distance d1, d2, d3;
    cout << "enter distance1 feet and inches (ex: 12 8): ";
    cin >> d1.feet >> d1.inches;
    cout << "enter distance2 feet and inches (ex: 12 8): ";
    cin >> d2.feet >> d2.inches;
    d3 = largestDistance(d1, d2);
    cout << "largest distance: " << d3.feet << " " << d3.inches << endl;
}