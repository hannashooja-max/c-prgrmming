#include <stdio.h>

// Function to calculate Sum of Digits
int Sod(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to reverse and print the number
void reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("Reverse of the number is %d", rev);
}

int main() {
    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);

    reverse(n);
    printf("\n");

    int result = Sod(n);
    printf("Sum of digits is %d\n", result);

    return 0;
}
