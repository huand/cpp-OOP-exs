const double TOLL = 0.5;
const char ESC = 27;

class tollbooth
{
  private:
    unsigned int cars;
    double money;

  public:
    tollbooth();
    ~tollbooth();
    void payingCar();
    void nopayCar();
    void display() const;
};