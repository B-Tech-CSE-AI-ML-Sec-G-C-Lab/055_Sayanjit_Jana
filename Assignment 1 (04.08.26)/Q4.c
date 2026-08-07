// * Reverse a number and check palindrome

#include <stdio.h>

int isPalindrome(int n) {
    int originalNum = n;
    int reversedNum = 0;
    while (n != 0) {
        reversedNum = reversedNum * 10 + n % 10;
        n /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    return 0;
}
