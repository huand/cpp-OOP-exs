#include<iostream>
using namespace std;


struct Distance
{
    int feet;
    float inches;
};


struct Volume
{
    Distance length;
    Distance width;
    Distance height;
};

void c04e03(){
    Volume room={{1,2},{2,3},{3,4}};
    float l,w,h;
    l=room.length.feet+room.length.inches/12;
    w=room.width.feet+room.width.inches/12;
    h=room.height.feet+room.height.inches/12;

    cout<<"Volume = "<<l*w*h<<"cubic feet\n";
}