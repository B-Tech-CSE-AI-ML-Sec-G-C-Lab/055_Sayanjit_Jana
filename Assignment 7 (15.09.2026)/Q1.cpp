// 1.	Write a C++ program that reads seven numbers and sorts them in descending order

#include <iostream>
using namespace std;

int main()
{
    int a[7], temp;

    // Read seven numbers
    cout << "Enter seven numbers: ";
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }

    // Sort in descending order
    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Display sorted numbers
    cout << "Numbers in descending order: ";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
