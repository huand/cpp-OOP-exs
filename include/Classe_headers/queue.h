class queue
{
  private:
    enum
    {
        MAXSIZE = 100
    };
    int arr[MAXSIZE];
    int n;

  public:
    queue(/* args */);
    ~queue();
    void put(int);
    int get();
    int inqueue();
};