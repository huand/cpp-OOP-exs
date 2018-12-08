#include "disk.h"
#include <iostream>
using namespace std;
disk::disk(){}
disk::disk(type t) : support(t), publication() {}
void disk::getdata()
{
    publication::getdata();
    cout << "Enter c for CD or d for DVD: ";
    char c;
    cin >> c;
    cin.ignore();

    switch (c)
    {
    case 'c':
        support = CD;
        break;
    case 'd':
        support = DVD;
        break;

    default:
        cout << "not c or d dumbass!!!" << endl;
        break;
    }
}
void disk::putdata()
{
    publication::putdata();
    cout << ", support: ";

    switch (support)
    {
    case CD:
        cout << "CD" << endl;
        break;
    case DVD:
        cout << "DVD" << endl;
        break;

    default:
        break;
    }
}