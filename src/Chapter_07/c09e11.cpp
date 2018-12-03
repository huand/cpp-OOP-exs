#include <iostream>
#include <iomanip>
using namespace std;

string ldtoms(long double);

void c07e11(){
    long double x = 123456789012345.88;
    string s=ldtoms(x);
    cout<<s<<endl;
}

string ldtoms(long double x){
    if (x>9999999999999990){
        cout<<"number too large!\n";
        exit(1);
    }
    string ustr=to_string(x);
    int pos=ustr.find('.');
    ustr.erase(pos+3,ustr.length());
    while(pos-3>0){
        ustr.insert(pos-3,",");
        pos-=3;
    }
    string str;
    str.append("$");
    str.append(ustr);
    return str;
}