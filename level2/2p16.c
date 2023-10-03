#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is divisible by any number from 2 to number/2
    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
