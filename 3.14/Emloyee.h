#include <iostream>
#include <string>
using namespace std;

class Emloyee
{
public:
    Emloyee(string a,string b,int c)
    {   setsurname(a);
        setgivename(b);
        if(c < 0)
        {
            c = 0;
        }
        else
            salary = c * 12;
    }
    int raises( int d)
    {
        salary = salary * (100 + d ) / 100;
        return salary;
    }
    void setsurname(string a)
    {
        surname = a;
    }
    string getsurname() const
    {
        return surname;
    }
    void setgivename(string b)
    {
        givename = b;
    }
    string getgivename() const
    {
        return givename;
    }
     void displaymessage()
    {
        cout << getsurname() << getgivename() << ": " << "Annual salary is " << salary << endl;
    }
private:
    string surname;
    string givename;
    int salary;

};
