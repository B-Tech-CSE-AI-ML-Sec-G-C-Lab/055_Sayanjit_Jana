// Write in C++ to check if a 2 given non negative integers to have the same last digit.

#include <iostream>
using namespace std;

// Function to check last digit
bool sameLastDigit(int a, int b)
{
    return (a % 10 == b % 10);
}

int main()
{
    int num1, num2;

    cout << "Enter two non-negative integers: ";
    cin >> num1 >> num2;

    if (sameLastDigit(num1, num2))
        cout << "True";
    else
        cout << "False";

    return 0;
}
