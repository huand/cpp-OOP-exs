
class polar
{
  private:
    double rho;
    double theta;

  public:
    polar(/* args */);
    polar(double Rho, double Theta);
    polar operator+(polar) const;
    void display() const;
    ~polar();
};