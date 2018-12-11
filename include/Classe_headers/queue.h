template<class T>
class queue
{
  private:
    enum
    {
        MAXSIZE = 100
    };
    T arr[MAXSIZE];
    int n;

  public:
    queue(/* args */);
    ~queue();
    void put(T);
    T get();
    int inqueue();
};