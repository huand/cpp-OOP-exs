#include <iostream>
#include "string"
#include "myString.h"
using namespace std;

class myStringP : public myString
{
public:
    myStringP();
    ~myStringP();
    myStringP(string);
};