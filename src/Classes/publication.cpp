#include "publication.h"
#include <iostream>
#include <string>
using namespace std;

publication::publication() : price(0), title("") {}
publication::publication(string s, float f){
    title=s;
    price=f;
}

publication::~publication(){}

void publication::getdata(){
    cout<<"enter title: ";
    getline(cin,title);
    cout<<"enter price: ";
    cin>>price;
    cin.ignore();
    
}

void publication::putdata(){
    cout << "title: " << title << ", price: " << price;
}