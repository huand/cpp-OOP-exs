#include <iostream>
using namespace std;

class employee
{
  private:
    int mNumber;
    float mCompensation;

  public:
    employee();
    ~employee();
    void fGetData();
    void fDisplay() const;
};

void c06e04(){
    employee e1;
    employee e2;
    e1.fDisplay();
    e2.fDisplay();
}

employee::employee()
{
    this->fGetData();
}
void employee::fGetData()
{
    cout << "enter employee number: ";
    cin >> mNumber;
    cout << "enter employee compensation: ";
    cin >> mCompensation;
};
void employee::fDisplay() const
{
    cout << "employee number: " << mNumber << ", compensation: " << mCompensation << endl;
}

employee::~employee()
{
    cout<<"get destructed lol employee "<<this->mNumber<<endl;
}
