#include "queue.h"
#include <iostream>
using namespace std;

void c07e09()
{
    queue q;
    q.put(1);
    cout<<q.inqueue()<< " elements in queue"<<endl;
    q.put(2);
    cout<<q.inqueue()<< " elements in queue"<<endl;
    q.put(3);
    cout<<q.inqueue()<< " elements in queue"<<endl;
    q.put(4);
    cout<<q.inqueue()<< " elements in queue"<<endl;
    q.put(5);
    cout<<q.inqueue()<< " elements in queue"<<endl;
    q.put(6);
    cout<<q.inqueue()<< " elements in queue"<<endl;

    cout << q.get() << endl;
    
    q.put(7);
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
    cout << q.get() << endl;
    cout<<q.inqueue()<< " elements in queue"<<endl;
}