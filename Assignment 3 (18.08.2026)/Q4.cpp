// Write in C++ to Find the largest number among 3 numbers

#include <iostream>
using namespace std;

// Function to find the largest number
int largest(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int num1, num2, num3, result;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    result = largest(num1, num2, num3);

    cout << "Largest number = " << result;

    return 0;
}
