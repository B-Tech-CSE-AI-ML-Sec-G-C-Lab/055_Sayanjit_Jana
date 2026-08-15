//* C Program to Replace each lowercase letter with the same uppercase letter of a given string. Return the newly created string

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Newly created string: %s", str);

    return 0;
}
