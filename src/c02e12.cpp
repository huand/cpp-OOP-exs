#include <iostream>
using namespace std;

void c02e12()
{
    cout << "enter decimal pounds: ";
    float decpounds;
    cin >> decpounds;
    float Pence = decpounds * 20 * 12;
    int pounds = Pence / 12 / 20;
    float Shillings = Pence / 12;
    int shillings = Shillings - pounds * 20;
    int pence = Pence - pounds * 20 * 12 - shillings * 12;
    cout << "equivalent in old notation: " << pounds << "." << shillings << "." << pence << endl;
}