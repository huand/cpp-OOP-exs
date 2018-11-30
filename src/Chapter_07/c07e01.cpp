#include <iostream>
#include <cstring>
using namespace std;

int lengthofstr(char s[]){
    int y=0;
    while(s[y]!='\0'){
        y++;
    }
    return ++y;
}

void reverseit(char s[])
{
    int n = lengthofstr(s);
    for(int i=0;i<(n-1)/2;i++){
        char t=s[i];
        s[i]=s[n-2-i];
        s[n-2-i]=t;
    }
}

void c07e01()
{
    const int MAX=1000;
    cout<<"Enter a phrase to reverse: ";
    char c[MAX];
    cin.get(c,MAX);
    cout<<"stringLength= "<<strlen(c)<<endl;
    cout<<"stringLength= "<<lengthofstr(c)<<endl;
    reverseit(c);
    cout<<"                        -> ";
    cout<<c<<endl;
}