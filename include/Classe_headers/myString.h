class myString
{
  private:
    enum
    {
        SZ = 80
    };
    char str[SZ];

  public:
    myString();
    myString(char s[]);
    void display() const;
    myString operator+(myString ss) const;
    void operator+=(myString ss);
};