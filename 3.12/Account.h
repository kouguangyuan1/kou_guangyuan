#include <iostream>
using namespace std;
class Account
{
public:
    Account(int a )
    {
        if( a < 0 )
        {
            cout << "The initial balance you entered is invalid.";
            rest = 0;
        }
        else
            rest = a;
    }
    int credit(int b)
    {
        rest = rest + b;
        return rest;
    }
    int debit(int c)
    {
        if(c > rest)
        {
            cout << "Debit amount exceeded account balance.";
        }
        rest = rest - c;
        return rest;
    }
    void getBalance()
    {
        cout << "Your rest is: " << rest <<endl;
    }
private:
    int rest;
};
