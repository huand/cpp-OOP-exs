#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

long double mstold(string);

void c07e07()
{
    char yn;
    do
    {
        string input = "";
        string output = "";
        cout << "Enter a money amount (ex $1,002,123.34): \n";
        getline(cin, input);
        int strl = input.length();
        for (int i = 0; i < strl; i++)
        {
            char c = input.at(i);
            if (c >= '0' && c <= '9' || c == '.')
            {
                output += c;
            }
        }
        long double x = mstold(output);
        cout << fixed << setprecision(2) << x << endl;
        cout << "Do you want to redo? (y/n): ";
        cin >> yn;
        cin.ignore(); //flush the end of line character still in cin
    } while (yn == 'y');
}

long double mstold(string str)
{
    long double x;
    x = stold(str);
    return x;
}