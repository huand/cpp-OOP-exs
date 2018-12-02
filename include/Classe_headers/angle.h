enum direction
{
    north,
    south,
    east,
    west
};

class angle
{
  private:
    int mDegrees;
    float mMinutes;
    direction mDirection;

  public:
    angle();
    angle(int, float, char);
    ~angle();
    void getAngle();
    void display() const;
};