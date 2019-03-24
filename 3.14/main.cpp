#include <iostream>
#include "Emloyee.h"
using namespace std;

int main()

{
    int a;
    int d;
    cout << "Please enter the salary: ";
    cin >> a >> d;
    Emloyee emloyee1("Zhang","san",a);
    emloyee1.displaymessage();
    double b;
    cout << "How much do you want to raise: ";
    cin >>b;
    emloyee1.raises(b);
    emloyee1.displaymessage();
    Emloyee emloyee2("Li","si",d);
    emloyee2.displaymessage();
    double c;
    cout << "How much do you want to raise: ";
    cin >>c;
    emloyee2.raises(c);
    emloyee2.displaymessage();
    return 0;
}
