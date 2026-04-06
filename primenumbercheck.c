#include <stdio.h>

int main() {
    int i, isPrime = 1, n;
    printf("the number you want to find out is a prime number or not: ");
    scanf("%d", &n);

    // 1. Logic fix: Numbers less than 2 are NOT prime
    if (n < 2) {
        isPrime = 0;
    } else {
        // 2. Start i at 2 to avoid division by zero
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("The given number is prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}
