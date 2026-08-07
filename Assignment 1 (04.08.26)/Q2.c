//* WAP in C to find prime numbers in a given range using Functions & Loop.

#include <stdio.h>

// Function to check whether a number is prime
int isPrime(int num)
{
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int start, end, i;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
