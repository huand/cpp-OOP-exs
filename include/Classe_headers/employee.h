#include <string>
using namespace std;

struct date
{
    int day, month, year;
};
enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};
class employee
{
  protected:
    int mNumber;
    float mCompensation;
    etype mType;
    date mDate;

  public:
    employee();
    ~employee();
    void fGetData();
    void fDisplay() const;
    string fGetType() const;
};

