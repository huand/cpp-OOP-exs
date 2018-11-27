#include <iostream>
using namespace std;

class date
{
  private:
    int mMonth, mDay, mYear;

  public:
    date();
    ~date();
    void getdate();
    void showdate() const;
};

void c06e05(){
    date d1;
    d1.showdate();
}

date::date()
{
    this->getdate();
}

void date::getdate()
{
    cout << "Enter date (dd/mm/yyyy): ";
    char c;
    cin >> mDay >> c >> mMonth >> c >> mYear;
}
void date::showdate() const
{
    cout << "Date is: " << mDay << '/'
         << mMonth << '/'
         << mYear << endl;
};
date::~date()
{
}
