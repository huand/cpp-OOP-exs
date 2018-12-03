#include "deck.h"
#include <iostream>
using namespace std;

void c07e06()
{
    deck d;
    int np=6;
    players playerlist[np];
    d.attribute_players(np, playerlist);
    d.shuffle();
    d.distribute();
    
    for(int i = 0; i < np; i++)
    {
        playerlist[i].showcards();
    }
    
}