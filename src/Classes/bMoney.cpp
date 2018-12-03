#include <iostream>
#include "bMoney.h"
using namespace std;

void bMoney::madd(bMoney m1, bMoney m2){
    money=m1.money+m2.money;
}
long double bMoney::string2ld(string input)
{
    string output = "";    
    int strl = input.length();
    for (int i = 0; i < strl; i++)
    {
        char c = input.at(i);
        if (c >= '0' && c <= '9' || c == '.')
        {
            output += c;
        }
    }
    return stold(output);
}
void bMoney::putmoney()
{
    if (money > 9999999999999990)
    {
        cout << "number too large!\n";
        exit(1);
    }
    string ustr = to_string(money);
    int pos = ustr.find('.');
    ustr.erase(pos + 3, ustr.length());
    while (pos - 3 > 0)
    {
        ustr.insert(pos - 3, ",");
        pos -= 3;
    }
    string str;
    str.append("$");
    str.append(ustr);
    cout << str << endl;
}
void bMoney::getmoney()
{
    string input = "";
    cout << "Enter a money amount (ex $1,002,123.34): ";
    getline(cin, input);
    money = string2ld(input);
}
bMoney::bMoney(/* args */)
{
}

bMoney::~bMoney()
{
}

bMoney::bMoney(char c[])
{
    string input(c);
    money = string2ld(input);
}