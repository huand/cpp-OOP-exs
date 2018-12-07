#include "publication.h"
#include "sales.h"
#include<iostream>
using namespace std;

class tape : public publication, public sales
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