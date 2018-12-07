#include <iostream>
#include "myStringP.h"
#include "string"
using namespace std;

myStringP::myStringP()
{
}

myStringP::~myStringP()
{
}

myStringP::myStringP(string s){
    int l=s.length();
    int n=l>=SZ?SZ:l;
    for(int i=0;i<n;i++){
        str[i]=s.at(i);
    }
}