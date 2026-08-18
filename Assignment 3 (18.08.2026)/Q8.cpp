// Write in C++ to check if it is possible to add 2 integers to get the third from three given integers.

#include <iostream>
using namespace std;

// Function to check the condition
bool checkSum(int a, int b, int c)
{
    if (a + b == c || a + c == b || b + c == a)
        return true;
    else
        return false;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (checkSum(num1, num2, num3))
        cout << "True";
    else
        cout << "False";

    return 0;
}
