
#if !defined(MACRO)
#define MACRO
#include <string>
using namespace std;

class publication
{
  protected:
    string title;
    float price;

  public:
    publication();
    publication(string, float);
    void getdata();
    void putdata();
    ~publication();
};

#endif // MACRO