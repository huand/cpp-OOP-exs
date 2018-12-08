
#if !defined(DISK)
#define DISK

#include "publication.h"
enum type
{
    CD,
    DVD
};
class disk : public publication
{
  private:
    type support;

  public:
    disk();
    disk(type);
    void putdata();
    void getdata();
};

#endif // DISK