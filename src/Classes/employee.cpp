#include "employee.h"
#include <iostream>
#include <string>
using namespace std;


employee::employee()
{
    this->fGetData();
}
void employee::fGetData()
{
    cout << "enter employee number: ";
    cin >> mNumber;
    cout << "enter employee compensation: ";
    cin >> mCompensation;
    char s;
    cout << "Enter date of employment (format dd/mm/yyyy): ";
    cin >> mDate.day >> s >> mDate.month >> s >> mDate.year;
    cout << "Enter employee type(first letter only)\n"
         << "laborer, secretary, manager,\n"
         << "accountant, executive, researcher : ";
    char t;
    cin >> t;
    switch (t)
    {
    case 'l':
        mType = laborer;
        break;
    case 's':
        mType = secretary;
        break;
    case 'm':
        mType = manager;
        break;
    case 'a':
        mType = accountant;
        break;
    case 'e':
        mType = executive;
        break;
    case 'r':
        mType = researcher;
        break;

    default:
        cout << "wrong letter dumbass!";
        break;
    }
};
void employee::fDisplay() const
{
    cout << "########################" << endl;
    cout << "employee number: " << mNumber << endl
         << "employee compensation: " << mCompensation << endl
         << "employee date of employment: " << mDate.day << "/" << mDate.month << "/" << mDate.year << endl
         << "employee type is " << fGetType() << endl;
}

employee::~employee()
{
    cout << "get destructed lol employee " << this->mNumber << endl;
}

string employee::fGetType() const
{
    string str;
    switch (mType)
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

    default:
        break;
    }
    return str;
}