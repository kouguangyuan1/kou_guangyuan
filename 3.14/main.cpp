#include <iostream>
#include "Emloyee.h"
using namespace std;

int main()
{
    Emloyee emloyee1("Zhang","san",80000);
    emloyee1.displaymessage();
    double b;
    cout << "How much do you want to raise: ";
    cin >>b;
    emloyee1.raises(b);
    emloyee1.displaymessage();
    Emloyee emloyee2("Li","si",100000);
    emloyee2.displaymessage();
    double c;
    cout << "How much do you want to raise: ";
    cin >>c;
    emloyee2.raises(c);
    emloyee2.displaymessage();
    return 0;
}
