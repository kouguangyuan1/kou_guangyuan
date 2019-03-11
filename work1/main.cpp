#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    int product = 0;
    int difference = 0;
    int quotient = 0;

    cout << "Enter two integers: ";
    cin >> number1 >> number2;
    sum = number1 + number2;
    product = number1 * number2;
    difference = number1 - number2;
    quotient = number1 / number2;
    cout << "The sum is " << sum << endl;
    cout << "The product is " << product << endl;
    cout << "The difference is " << difference << endl;
    cout << "The quotient is " << quotient << endl;
    return 0;
}
