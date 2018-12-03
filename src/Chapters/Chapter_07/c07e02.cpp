#include "employee.h"
#include <iostream>
using namespace std;

void c07e02(){
    int const Nemp=3;
    employee emp[Nemp];
    for (int i=0;i<Nemp;i++){
        emp[i].fDisplay();
    }
}