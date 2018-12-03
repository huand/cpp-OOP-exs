#include "players.h"
#include "cards.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

players::players(/* args */)
{
    totplayers++;
    playerid=totplayers;
    ncards=0;
    cardlist=new cards*[pdeck->numcards()];
    cout<<"Enter player "<<playerid<< " name: ";
    cin.getline(name,256);
}

players::~players()
{
}

void players::setcard(cards *c){
    cardlist[ncards++]=c;
}

void players::setdeck(deck* pd){
    pdeck=pd;
}

void players::showcards(){
    
    cout<<setw(15)<<name<<" hand is: ";
    for(int i = 0; i < ncards; i++)
    {
        cardlist[i]->display();
        cout<<" ";
    }
    cout<<endl;
}

int players::totplayers=0;