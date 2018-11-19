#include<iostream>
#include<iomanip>
using namespace std;

void c03e01(){
    cout<<"enter a number: ";
    int n;
    cin>>n;
    const int col=10,row=20;
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            cout<<setw(5)<<n*(c+1)+r*col*n;
        }
        cout<<endl;
    }
}