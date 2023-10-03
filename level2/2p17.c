#include <stdio.h>

int main() {
    int number, digit, sum = 0, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Calculate the sum of digits
    int tempNumber = number;
    while (tempNumber != 0) {
        digit = tempNumber % 10;
        sum += digit;
        tempNumber /= 10;
    }

    // Print the results
    if (isPrime && sum == 14)
        printf("%d is a prime number and the sum of its digits is equal to 14.\n", number);
    else if (isPrime)
        printf("%d is a prime number but the sum of its digits is not equal to 14.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
