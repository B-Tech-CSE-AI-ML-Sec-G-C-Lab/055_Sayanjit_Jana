// 4.	Write a C++ program to enter two angles of a triangle and find the third angle.

#include <iostream>
using namespace std;

int main()
{
    float angle1, angle2, angle3;

    cout << "Enter two angles of the triangle: ";
    cin >> angle1 >> angle2;

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);

    cout << "The third angle is: " << angle3 << " degrees";

    return 0;
}
