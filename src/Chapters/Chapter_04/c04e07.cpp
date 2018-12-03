#include <iostream>
using namespace std;

enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

struct date
{
    int day, month, year;
};

struct employee
{
    int number;
    float compensation;
    etype type;
    date firstemployment;
};

void c04e07()
{
    const int n_emp = 3;
    employee arr_emp[n_emp];
    for (int i = 0; i < n_emp; i++)
    {
        cout << "Enter employee " << i+1 << " number: ";
        cin >> arr_emp[i].number;
        cout << "Enter employee " << i+1 << " compensation: ";
        cin >> arr_emp[i].compensation;
        cout << "Enter employee " << i+1
             << "type(first letter only)\n"
             << "laborer, secretary, manager,\n"
             << "accountant, executive, researcher: ";
        char t;
        cin >> t;
        switch (t)
        {
        case 'l':
            arr_emp[i].type = laborer;
            break;
        case 's':
            arr_emp[i].type = secretary;
            break;
        case 'm':
            arr_emp[i].type = manager;
            break;
        case 'a':
            arr_emp[i].type = accountant;
            break;
        case 'e':
            arr_emp[i].type = executive;
        case 'r':
            arr_emp[i].type = researcher;
            break;

        default:
            cout << "wrong letter dumbass!";
            break;
        }
        cout << "Enter employee " << i << " date of first employment (dd/mm/yyyy): ";
        char s;
        cin >> arr_emp[i].firstemployment.day >> s >> arr_emp[i].firstemployment.month >> s >> arr_emp[i].firstemployment.year;
    }
    cout<<"####################################\n";
    for (int i = 0; i < n_emp; i++)
    {
        cout << "Employee " << i+1 << ":\n"
             << "number: " << arr_emp[i].number<<endl
             << "compensation: " << arr_emp[i].compensation<<endl
             << "type: ";

        string str;

        switch (arr_emp[i].type)
        {
        case laborer:
            str = "laborer";
            break;
        case secretary:
            str = "secretary";
            break;
        case manager:
            str = "manager";
            break;
        case accountant:
            str = "accountant";
            break;
        case executive:
            str = "executive";
            break;
        case researcher:
            str = "researcher";
            break;

        default:
            break;
        }
        cout << str << endl;
        cout<<"________________________\n";
    }
}