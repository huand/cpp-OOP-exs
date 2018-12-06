
class sterling
{
  private:
    enum
    {
        po2sh = 12,
        sh2pe = 20
    };
    long pounds;
    int shillings;
    int pence;

  public:
    sterling();
    sterling(double);
    sterling(long pounds, int shillings, int pence);
    void getSterling();
    void putSterling();
    sterling operator+(sterling);
    sterling operator-(sterling);
    double operator/(sterling);
    sterling operator/(double);
    sterling operator*(double);
    long sterling2pence();
    void simplify();
    ~sterling();
};