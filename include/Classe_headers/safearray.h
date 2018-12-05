class safearray
{
  private:
    enum
    {
        LIMIT = 100
    };
    int array[LIMIT];
    int limmin;
    int limmax;

  public:
    safearray(/* args */);
    safearray(int,int);
    ~safearray();
    void putel(int index, int value);
    int& operator[](int);
    int getel(int);
};