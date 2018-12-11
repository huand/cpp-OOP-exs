#include "queue.h"
#include <iostream>
using namespace std;

template<class T>
queue<T>::queue(/* args */)
{
    n = 0;
}

template<class T>
queue<T>::~queue()
{
}

template<class T>
void queue<T>::put(T i)
{

    if (n < MAXSIZE)
    {
        arr[n++] = i;
    }
}

template<class T>
T queue<T>::get()
{
    if (n > 0)
    {
        T temp = arr[0];
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
template<class T>
int queue<T>::inqueue()
{
    return n;
}