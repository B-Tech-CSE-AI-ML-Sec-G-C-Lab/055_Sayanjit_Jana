//* C Program to Count the total number of alphabets, digits and special characters in a string

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
            alphabets++;
        else if (isdigit(str[i]))
            digits++;
        else if (str[i] != '\n' && !isspace(str[i]))
            special++;
    }

    printf("\nTotal Alphabets = %d", alphabets);
    printf("\nTotal Digits = %d", digits);
    printf("\nTotal Special Characters = %d", special);

    return 0;
}
