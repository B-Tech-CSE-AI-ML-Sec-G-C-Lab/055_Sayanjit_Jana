// Write in C++ to find perfect numbers in a range.

#include <iostream>
using namespace std;

// Function to check perfect number
bool isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Perfect numbers are: ";

    for (int i = start; i <= end; i++)
    {
        if (isPerfect(i))
            cout << i << " ";
    }

    return 0;
}
