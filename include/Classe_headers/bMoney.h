using namespace std;
class bMoney
{
  private:
    long double money;

  public:
    bMoney(/* args */);
    bMoney(char[]);
    void madd(bMoney, bMoney);
    void getmoney();
    void putmoney();
    long double string2ld(string);
    ~bMoney();
};