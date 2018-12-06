#include "publication.h"

class book : public publication
{
  private:
    int pagecount;

  public:
    book();
    book(string, float, int);
    ~book();
    void putdata();
    void getdata();
};
