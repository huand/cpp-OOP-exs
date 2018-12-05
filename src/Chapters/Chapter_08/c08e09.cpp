#include "safearray.h"
#include <iostream>
using namespace std;
void c08e09(){
    safearray a(10,100-1);
    int index=20;
    a[index]=666;
    cout<<a[index]<<endl;
    cout<<"check ok!\n";
}