#include <iostream>
using namespace std;

struct sterling
{
    int pounds, shillings, pence;
};

sterling getmoney();
sterling addsterling(sterling s1, sterling s2);
void displaySterling(sterling y);

void c05e11()
{
    sterling s1, s2, s3;
    cout<<"enter two amounts of old style sterling to add:\n";
    s1 = getmoney();
    s2 = getmoney();
    cout<<"the sum is:\n";
    s3 = addsterling(s1, s2);
    displaySterling(s3);
}

sterling getmoney()
{
    sterling y;
    char c;
    cout << "Enter old-style sterling (ex 12.4.11): ";
    cin >> y.pounds >> c >> y.shillings >> c >> y.pence;
    return y;
}

sterling addsterling(sterling s1, sterling s2)
{
    sterling y;
    int pence = (s1.pounds + s2.pounds) * 12 * 20 + (s1.shillings + s2.shillings) * 20 + s1.pence + s2.pence;
    y.pence = pence % 20;
    y.shillings = pence / 20 % 12;
    y.pounds = pence / 12 / 20;
    return y;
}

void displaySterling(sterling y)
{
    cout << "old style sterling amount: "
         << y.pounds << "."
         << y.shillings << '.'
         << y.pence << endl;
}