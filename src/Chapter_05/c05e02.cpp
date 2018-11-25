#include <iostream>
using namespace std;

double power(double n, int p=2){
    double res=1;
    for(int i=0;i<p;i++) res*=n;
    return res;
}

void c05e02(){
    cout<<power(2.1)<<endl;
}