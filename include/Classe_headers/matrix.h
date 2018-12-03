#include <iostream>
using namespace std;

class matrix
{
  private:
    enum
    {
        MAXSIZE = 10
    };
    int arr[MAXSIZE][MAXSIZE];
    int r, c;

  public:
    matrix(/* args */);
    matrix(int, int);
    ~matrix();
    int getel(int, int);
    void putel(int, int, int);
};
