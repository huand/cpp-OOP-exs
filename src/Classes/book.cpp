#include "book.h"
#include <iostream>
#include <string>

using namespace std;

book::book()
{
    publication();
    pagecount = 0;
}

book::book(string s, float f, int i):publication(s, f)
{
    pagecount = i;
}
void book::getdata(){
    publication::getdata();
    sales::getdata();
    cout<<"Enter page count: ";
    cin>>pagecount;
    cin.ignore();
}
void book::putdata()
{
    publication::putdata();
     cout<<", page count: " << pagecount;
     sales::putdata();
}

book::~book() {}