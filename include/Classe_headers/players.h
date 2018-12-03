#ifndef PLAYERS
#define PLAYERS
#include "deck.h"
#include <iostream>
using namespace std;
class cards;
class deck;
class players
{
private:
  int static totplayers;
  int playerid;
  int ncards;
  cards **cardlist;
  deck *pdeck;
  char name[256];

public:
  players(/* args */);
  void setcard(cards *);
  void setdeck(deck *);
  void showcards();
  ~players();
};

#endif