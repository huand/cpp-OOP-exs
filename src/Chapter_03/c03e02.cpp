#include <iostream>
using namespace std;

float F2C(float);
float C2F(float);

void c03e02()
{
    cout << "type 1 to convert Fahrenheit to Celsius," << endl;
    cout << "     2 to convert Celsius to Fahrenheit: ";
    int n;
    cin >> n;
    float temp;
    if (n == 1)
    {
        cout << "enter temp in fahrenheit: ";
        cin >> temp;
        float y = F2C(temp);
        cout << "in celsius that's: " << y << endl;
    }

    else if (n == 2)
    {
        cout << "enter temp in celsius: ";
        cin >> temp;
        float y = C2F(temp);
        cout << "in fahrenheit that's: " << y << endl;
    }
}

float F2C(float x)
{
    return (x - 32) * 5 / 9;
}
float C2F(float x)
{
    return x * 9 / 5 + 32;
}