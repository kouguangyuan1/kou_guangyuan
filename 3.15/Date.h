#include <iostream>

using namespace std;

class Date
{
public:
    Date(int a,int b,int c)
    {
        if(a < 1 && a > 12)
        {
            a = 1;
        }
        setMonth(a);
        setDay(b);
        setYear(c);

    }
    void setMonth(int a)
    {
        Month = a;
    }
    int getMonth() const
    {
        return Month;
    }
    void setDay(int b)
    {
        Day = b;
    }
    int getDay() const
    {
        return Day;
    }
    void setYear(int c)
    {
        Year = c;
    }
    int getYear() const
    {
        return Year;
    }
    void displayDate()
    {
        cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
    }
private:
    int Month;
    int Day;
    int Year;
};
