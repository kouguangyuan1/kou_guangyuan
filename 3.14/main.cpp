#include <iostream>
#include "Emloyee.h"
using namespace std;

int main()

{
    int a;
    int d;
    cout << "Please enter the salary: ";
    cin >> a;
    Emloyee emloyee1("Zhang","San",a);
    emloyee1.displaymessage();
    int b;
    cout << "How much percentage do you want to raise: ";
    cin >>b;
    emloyee1.raises(b);
    emloyee1.displaymessage();

    cout << "Please enter the salary: ";
    cin >> d;
    Emloyee emloyee2("Li","Si",d);
    emloyee2.displaymessage();
    int c;
    cout << "How much percentage do you want to raise: ";
    cin >>c;
    emloyee2.raises(c);
    emloyee2.displaymessage();
    return 0;
}
