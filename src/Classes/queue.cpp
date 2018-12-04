#include "queue.h"
#include <iostream>
using namespace std;

queue::queue(/* args */)
{
    n = 0;
}

queue::~queue()
{
}

void queue::put(int i)
{

    if (n < MAXSIZE)
    {
        arr[n++] = i;
    }
}

int queue::get()
{
    if (n > 0)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        n--;
        return temp;
    }
    else
    {
        cout << "Queue is empty!\n";
        exit(-1);
    }
}
int queue::inqueue()
{
    return n;
}