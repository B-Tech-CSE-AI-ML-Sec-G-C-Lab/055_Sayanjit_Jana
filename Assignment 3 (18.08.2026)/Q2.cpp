/*
WAP in C++ to check for odd or even using function
*/

#include <iostream>
using namespace std;

// Function to check odd or even
void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        cout << n << " is Even";
    else
        cout << n << " is Odd";
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    checkEvenOdd(num);

    return 0;
}
