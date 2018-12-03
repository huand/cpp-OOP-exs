#include <iostream>
using namespace std;

void c03e10()
{
    cout << "Enter initial amount: ";
    float init;
    cin >> init;
    cout << "Enter final amount: ";
    int target;
    cin >> target;
    cout << "Enter interest rate (percent per years): ";
    float rate;
    cin >> rate;
    float res = init;
    int years=0;
    while(res<target){
        years++;
        res *= 1 + rate / 100;
    }
    cout << "At the end of " << years
         << " years, you will have " << res
         << " dollars." << endl;
}