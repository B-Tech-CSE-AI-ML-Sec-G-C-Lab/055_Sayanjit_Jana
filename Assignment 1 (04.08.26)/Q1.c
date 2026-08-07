//* WAP in C to check prime no using Functions & Loop.
#include<stdio.h>

int isprime(int n){
    if(n<=1) return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,m;
    printf("Enter a number 1: "); 
    printf("Enter a number 2: ");
    scanf("%d %d", &n, &m);
    for(int i = n;i<=m;i++){
    if(isprime(i)) {
        printf("%d is a prime number.\n", i);
    } else {
        printf("%d is not a prime number.\n", i);
    }
    }
    return 0;
}
