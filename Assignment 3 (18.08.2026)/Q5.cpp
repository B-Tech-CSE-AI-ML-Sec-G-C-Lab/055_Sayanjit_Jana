/*
Write in C++ to find the absolute difference between n & 51. If n is greater than 51, return triple the difference.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// Function to find the absolute difference
int difference(int n)
{
    int diff = abs(n - 51);

    if (n > 51)
        return 3 * diff;
    else
        return diff;
}

int main()
{
    int n, result;

    cout << "Enter a number: ";
    cin >> n;

    result = difference(n);

    cout << "Result = " << result;

    return 0;
}
