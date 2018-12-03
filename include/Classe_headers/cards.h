#ifndef CARDS
#define CARDS
#include "deck.h"

enum Suit
{
    clubs,
    diamonds,
    hearts,
    spades
};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
class deck;
class cards
{
  private:
    int number;
    Suit suit;
    deck *mDeck;

  public:
    cards(/* args */);
    cards(int n, Suit s);
    void display();
    ~cards();
};
#endif