#ifndef DECK
#define DECK
#include "cards.h"
#include "players.h"
class cards;
class players;
class deck
{
private:
  enum
  {
    nCards = 52
  };
  cards *cardlist;
  cards **cardorder;
  int nplayers;
  players *playerlist;

public:
  deck(/* args */);
  void attribute_players(int, players*);
  void shuffle();
  void distribute();
  int numcards();
  ~deck();
};
#endif