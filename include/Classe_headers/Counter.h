class Counter
{
  protected:
    unsigned int count;

  public:
    Counter() : count()
    {
    }
    Counter(int c) : count(c)
    {
    }
    unsigned int get_count() const
    {
        return count;
    }
    Counter operator++()
    {
        return Counter(++count);
    }
};

class CountDn : public Counter
{
  public:
    CountDn() : Counter()
    {
    }
    CountDn(int c) : Counter(c)
    {
    }
    CountDn operator--()
    {
        return CountDn(--count);
    }
};

class CountUD : public Counter
{
  public:
    CountUD() : Counter() {}
    CountUD(int c) : Counter(c) {}
    CountUD operator++(int)
    {
        return CountUD(count++);
    }
    CountUD operator--(int)
    {
        return CountUD(count--);
    }
    CountUD operator++()
    {
        return CountUD(++count);
    }
    CountUD operator--()
    {
        return CountUD(--count);
    }
};