#include "cards.h"
#include <iostream>
#include <iomanip>
using namespace std;

cards::cards(/* args */){};
cards::cards(int n, Suit s)
{
    number = n;
    suit = s;
};
void cards::display()
{
    string str;
    if (number >= 2 && number <= 10)
    {
        str = to_string(number);
        //cout << number;
    }
    else
        switch (number)
        {
        case jack:
            str = "J";
            break;
        case queen:
            str = "Q";
            break;
        case king:
            str = "K";
            break;
        case ace:
            str = "A";
            break;
        }

    switch (suit)
    {
    case clubs:
        str += static_cast<char>(97);
        break;
    case diamonds:
        str += static_cast<char>(98);
        break;
    case hearts:
        str += static_cast<char>(99);
        break;
    case spades:
        str += static_cast<char>(100);
        break;
    }
    cout << setw(3) << str;
};
cards::~cards(){};