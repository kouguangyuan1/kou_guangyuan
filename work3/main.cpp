#include <iostream>

using namespace std;

int main()
{
    int r = 0;
    int R = 0;
    int S = 0;
    int C = 0;
    int a = 3.14159;

    cout << " Enter an integer: ";
    cin >> r ;
    R = r + r;
    S = a * r * r;
    C = a * ( r + r );
    cout << "The R is " << R << endl;
    cout << "The S is " << S << endl;
    cout << "The C is " << C << endl;
    return 0;
}
