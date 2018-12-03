#include <iostream>
using namespace std;

struct sterling
{
    int pounds, shillings, pence;
};

void c04e10()
{
    double ns;
    cout << "please enter money in new-style pound (ex 12.31): ";
    cin >> ns;
    int pence = ns * 12 * 20;
    sterling res;
    res.pence = pence % 20;
    res.shillings = pence / 20 % 12;
    res.pounds = pence / 20 / 12;
    cout << "is " << res.pounds << " pounds, " << res.shillings
         << " shillings, " << res.pence << " pence.\n";
}