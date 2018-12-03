class Distance
{
  private:
    int feet;
    float inches;

  public:
    Distance(/* args */);
    Distance(int, float);
    void get();
    void disp() const;
    void add(Distance);
    void div(float);
    void mul(float);
    Distance operator + (Distance) const;
    Distance operator - (Distance) const;
    ~Distance();
};