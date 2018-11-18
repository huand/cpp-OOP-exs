#include<iostream>
using namespace std;

void c02e06(){
    const float pound2us=1.487;
    const float ff2us=0.172;
    const float gd2us=0.584;
    const float jp2us=0.00955;
    cout<<"enter dollar amount: ";
    float dollar;
    cin>>dollar;
    cout<<"= "<< dollar/pound2us<<" pounds"<<endl;
    cout<<"= "<< dollar/ff2us<<" french francs"<<endl;
    cout<<"= "<< dollar/gd2us<<" german deutschmarks"<<endl;
    cout<<"= "<< dollar/jp2us<<" japanese yen"<<endl;
}