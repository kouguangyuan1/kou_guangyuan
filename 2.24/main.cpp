#include <iostream>

using namespace std;

int main()
{
   int a = 0;
   int b = 0;
   cout << " Enter an integer: ";
   cin >> a;
   b = a%2;
   if ( b == 0 )
    cout << " The number is even number ";
   if ( b != 0 )
    cout << " The number is odd number ";
}
