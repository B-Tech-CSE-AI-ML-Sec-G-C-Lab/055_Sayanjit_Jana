/*
Swap two numbers without using third variable
*/

#include <iostream>
using namespace std;

// Function to swap two numbers
void swapNumbers(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nBefore swapping:";
    cout << "\nFirst number = " << num1;
    cout << "\nSecond number = " << num2;

    swapNumbers(num1, num2);

    cout << "\n\nAfter swapping:";
    cout << "\nFirst number = " << num1;
    cout << "\nSecond number = " << num2;

    return 0;
}
