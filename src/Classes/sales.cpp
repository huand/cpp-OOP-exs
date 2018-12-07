#include "sales.h"
#include <iostream>
using namespace std;

sales::sales()
{
    monthlysales[0] = monthlysales[1] = monthlysales[2] = 0;
}
sales::sales(int i1)
{
    monthlysales[0] = i1;
    monthlysales[1] = monthlysales[2] = 0;
}
sales::sales(int i1, int i2)
{
    monthlysales[0] = i1;
    monthlysales[1] = i2;
    monthlysales[2] = 0;
}
sales::sales(int i1, int i2, int i3)
{

    monthlysales[0] = i1;
    monthlysales[1] = i2;
    monthlysales[2] = i3;
}
void sales::getdata()
{
    cout << "Enter the 3 last monthly sales (ex: 1002.3, 778.28, 212.23): ";
    char c;
    cin >> monthlysales[0] >> c >> monthlysales[1] >> c >> monthlysales[2];
    cin.ignore();
}
void sales::putdata()
{
    cout << ", monthly sales are: "
         << monthlysales[0]
         << ", " << monthlysales[1]
         << ", " << monthlysales[2] << endl;
}