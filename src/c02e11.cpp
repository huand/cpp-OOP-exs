#include <iostream>
#include <iomanip>
using namespace std;

void c02e11()
{
    cout << setiosflags(ios::left)
         << setw(12) << "Last name" << setw(12) << "First name" << setw(18) << "Street address"     << setw(12)     << "Town" << setw(12) << "State" << endl
         << "------------------------------------------------------------" << endl
         << setw(12) << "Jones"     << setw(12) << "Bernard"    << setw(18) << "109 Pine Lane"      << setw(12) << "Littletown" << setw(12) << "MI" << endl
         << setw(12) << "O'Brian"   << setw(12) << "Coleen"     << setw(18) << "42 E. 99th Ave."    << setw(12) << "Bigcity"    << setw(12) << "NY" << endl
         << setw(12) << "Wong"      << setw(12) << "Harry"      << setw(18) << "121-A Alabama St."  << setw(12) << "Lakeville"  << setw(12) << "IL" << endl;
}