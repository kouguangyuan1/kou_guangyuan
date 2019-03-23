#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account account1(10000);
    account1.getBalance();
    cout << "Please enter the money you want to credit: \n";
    int b;
    cin>> b;
    account1.credit(b);
    account1.getBalance();
    cout << "Please enter the money you want to debit: \n";
    int c;
    cin >> c;
    account1.debit(c);
    account1.getBalance();

    Account account2(200000);
    account2.getBalance();
    cout << "Please enter the money you want to credit: \n";
    int d;
    cin >> d;
    account2.credit(d);
    account2.getBalance();
    cout << "Please enter the money you want to credit: \n";
    int e;
    cin >> e;
    account2.debit(e);
    account2.getBalance();
}
