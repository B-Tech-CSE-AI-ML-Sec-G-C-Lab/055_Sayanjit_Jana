// * Menu Driven Calculator

#include <stdio.h>

int Calc(int a, int b, int choice)
{
    switch (choice)
    {
    case 1:
        return a + b;
    case 2:
        return a - b;
    case 3:
        return a * b;
    case 4:
        if (b != 0)
        {
            return a / b;
        }
        printf("Division by zero is not allowed.\n");
        return 0;
    default:
        printf("Invalid choice.\n");
        return 0;
    }
}

int main(void)
{
    int n, m, choice;

    while (1)
    {
        printf("Enter 1st number: ");
        if (scanf("%d", &n) != 1)
        {
            break;
        }

        printf("Enter 2nd number: ");
        if (scanf("%d", &m) != 1)
        {
            break;
        }

        printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 to exit: ");
        if (scanf("%d", &choice) != 1)
        {
            break;
        }

        if (choice == 5)
        {
            printf("Exiting the program.\n");
            break;
        }

        int result = Calc(n, m, choice);
        printf("Result: %d\n", result);
        printf("\n");
    }

    return 0;
}
