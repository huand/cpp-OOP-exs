
#if !defined(SALES)
#define SALES
class sales
{
protected:
    float monthlysales[3];
public:
    sales();
    sales(int);
    sales(int,int);
    sales(int,int,int);
    void getdata();
    void putdata();
};


#endif // SALES