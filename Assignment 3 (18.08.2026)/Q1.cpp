/*
WAP in C++ to add two numbers using function
*/

#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = add(num1, num2);

    cout << "Sum = " << sum << endl;

    return 0;
}
