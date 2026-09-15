// 2.	Write a C++ program to check whether a given length of three sides forms a right triangle.

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check which side is the longest
    if ((a * a + b * b == c * c) ||
        (a * a + c * c == b * b) ||
        (b * b + c * c == a * a))
    {
        cout << "The given sides form a right triangle.";
    }
    else
    {
        cout << "The given sides do not form a right triangle.";
    }

    return 0;
}
