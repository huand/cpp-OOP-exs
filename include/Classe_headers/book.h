#include "publication.h"
#include "sales.h"

class book : public publication, public sales
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
