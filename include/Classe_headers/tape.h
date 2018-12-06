#include "publication.h"
#include<iostream>
using namespace std;

class tape : public publication
{
  private:
    float length;

  public:
    tape();
    tape(float);
    tape(string, float, float);
    void getdata();
    void putdata();
};