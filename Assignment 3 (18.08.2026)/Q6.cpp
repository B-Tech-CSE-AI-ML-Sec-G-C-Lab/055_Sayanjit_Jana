/*
Write in C++ to check if 2 given integers, and return true if one of them is 30 or if their sum is 30
*/

#include <iostream>
using namespace std;

// Function to check the condition
bool check30(int a, int b)
{
    if (a == 30 || b == 30 || (a + b) == 30)
        return true;
    else
        return false;
}

int main()
{
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (check30(num1, num2))
        cout << "True";
    else
        cout << "False";

    return 0;
}
