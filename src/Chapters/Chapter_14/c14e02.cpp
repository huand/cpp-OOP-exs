#include "queue.h"
#include <iostream>
using namespace std;

void c14e02()
{

    try
    {
        queue<int> q;
        q.put(1);
        q.put(2);
        q.put(3);
        //q.put(4);

        cout << q.get() << endl;
        cout << q.get() << endl;
        cout << q.get() << endl;
        cout << q.get() << endl;
    }
    catch (queue<int>::QueueFull)
    {
        cout<<"queue is full\n";
        exit(-1);
    }
    catch (queue<int>::QueueEmpty)
    {
        cout<<"queue is empty\n";
        exit(-1);
    }
}