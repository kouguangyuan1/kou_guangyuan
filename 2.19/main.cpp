#include <iostream>

using namespace std;

int main()
{
    int a = 0;int b = 0;int c = 0;
    int d = 0;int e = 0;int f = 0;
    int g = 0;

    cout << " Input three different integers: ";
    cin >> a >> b >> c;
    d= a + b + c;
    e = ( a + b + c )/3;
    f = a * b * c;
    cout << " Sum is " << d << endl;
    cout << " Average is " << e << endl;
    cout << " Product is " << f << endl;

    if ( a > b )
    {
        g = a;
        a = b;
        b = g;
    }
    if ( b > c )
    {
        g = b;
        b = c;
        c = g;
    }
    if ( a > c )
    {
        g = c;
        c = a;
        a = g;
    }
    cout << " Smallest is " << a <<endl;
    cout << " Largest is " << c << endl;


    return 0;
}
