#include <iostream>
using namespace std;

float circarea(float rad)
{
    const float PI = 3.14159F;
    return PI * rad * rad;
}

void c05e01()
{
    float rad;
    cout << "enter radius of circle: ";
    cin >> rad;
    float area = circarea(rad);
    cout << "Area is: " << area << endl;
}