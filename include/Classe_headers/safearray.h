class safearray
{
  private:
    enum
    {
        LIMIT = 100
    };
    int array[LIMIT];

  public:
    safearray(/* args */);
    ~safearray();
    void putel(int, int);
    int getel(int);
};