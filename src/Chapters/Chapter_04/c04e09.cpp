#include<iostream>
using namespace std;


struct timeStr
{
    int hours,minutes,secondes;
};

void c04e09(){
    cout<<"enter the time wasted(hh:mm:ss): ";
    char c;
    timeStr wt;
    cin>>wt.hours>>c>>wt.minutes>>c>>wt.secondes;
    cout<<"the total time wasted in seconds is "<<wt.hours*3600+wt.minutes*60+wt.secondes<<endl;
}