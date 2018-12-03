#include<iostream>
using namespace std;

void c03e09(){
    cout<<"enter number of guests: ";
    int G;
    cin>>G;
    cout<<"enter number of chairs: ";
    int C;
    cin>>C;
    int y=G;
    for(int i=1;i<C;i++){
        y*=G-i;
    }
    cout<<"There is "
    <<y
    <<" ways to arrange people around the table.\n";
}