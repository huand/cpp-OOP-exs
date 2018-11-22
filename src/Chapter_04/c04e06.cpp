#include <iostream>
using namespace std;

enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive
};

void c04e06()
{
    cout << "Enter employee type(first letter only)\n"
         << "laborer, secretary, manager,\n"
         << "accountant, executive, researcher : ";
    char t;
    cin >> t;

    etype type;

    switch (t)
    {
    case 'l':
        type = laborer;
        break;
    case 's':
        type = secretary;
        break;
    case 'm':
        type = manager;
        break;
    case 'a':
        type = accountant;
        break;
    case 'e':
        type = executive;
        break;

    default:
        cout << "wrong letter dumbass!";
        break;
    }

    string str;

    switch (type)
    {
    case 0:
        str = "laborer";
        break;
    case 1:
        str = "secretary";
        break;
    case 2:
        str = "manager";
        break;
    case 3:
        str = "accountant";
        break;
    case 4:
        str = "executive";
        break;

    default:
        break;
    }
    cout << "employee type is " << str << endl;
}