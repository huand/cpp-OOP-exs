#include "deck.h"
#include "cards.h"
#include <iostream>  // std::cout
#include <algorithm> // std::random_shuffle
#include <vector>    // std::vector
#include <ctime>     // std::time
#include <cstdlib>   // std::rand, std::srand
deck::deck(/* args */)
{
    cardlist = new cards[nCards];
    cardorder= new cards*[nCards];
    for (int n = 0; n < 52; n++)
    {
        int num = n % 13 + 2;
        Suit s = Suit(n / 13);
        cardlist[n] = cards(num, s);
        cardorder[n] = &cardlist[n];
    }
}

deck::~deck()
{
}
void deck::attribute_players(int n, players *p)
{
    playerlist = p;
    nplayers = n;

    for (int i = 0; i < nplayers; i++)
    {
        playerlist[i].setdeck(this);
    }
}
void deck::shuffle()
{
    std::srand(unsigned(std::time(0)));
    std::vector<int> myvector;

    // set some values:
    for (int i = 0; i < 52; ++i)
        myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

    // using built-in random generator:
    std::random_shuffle(myvector.begin(), myvector.end());

    int k = 0;
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    {
        //std::cout << ' ' << *it;
        cardorder[k] = &cardlist[*it];
        k++;
    }
}
void deck::distribute(){
    
    for(int i = 0; i < 52; i++)
    {
        playerlist[i%nplayers].setcard(cardorder[i]);
    }    
}

int deck::numcards(){
    return nCards;
}