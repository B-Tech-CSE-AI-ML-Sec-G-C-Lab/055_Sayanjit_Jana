// Write in C++ to find whether a number is prime or not.

#include <iostream>
using namespace std;

// Function to check prime number
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a Prime Number";
    else
        cout << n << " is not a Prime Number";

    return 0;
}
