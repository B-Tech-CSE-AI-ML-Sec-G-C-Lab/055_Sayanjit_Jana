// 3.	Write a C++ program to swap the first and last digits of any number.

#include <iostream>
using namespace std;

int main()
{
    int n, first, last, digits, power, middle, result;

    cout << "Enter a number: ";
    cin >> n;

    // Find the last digit
    last = n % 10;

    // Find the first digit and number of digits
    digits = n;
    power = 1;

    while (digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    // Remove first and last digits
    middle = (n % power) / 10;

    // Swap first and last digits
    result = last * power + middle * 10 + first;

    cout << "Number after swapping first and last digits: " << result;

    return 0;
}
