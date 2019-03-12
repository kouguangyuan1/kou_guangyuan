#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << " Enter two integers: ";
    cin >> a >> b;
    if ( a == b )
        cout << a << " These numbers are equal.";
    if ( a < b )
        cout << b << " is large " << a;
    if ( a > b )
        cout << a << " is large " << b;
    return 0;

}
