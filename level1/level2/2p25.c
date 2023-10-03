#include <stdio.h>

int main() {
    int number;
    int total = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check each digit of the number
    while (number != 0) {
        int digit = number % 10;
        int isPrime = 1;
        
        // If the digit is 0 or 1, it is not prime
        if (digit == 0 || digit == 1) {
            isPrime = 0;
        }
        
        // Check if the digit is divisible by any number from 2 to digit/2
        for (int i = 2; i <= digit / 2; i++) {
            if (digit % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        // If the digit is prime, increment the total
        if (isPrime) {
            total++;
        }
        
        number /= 10;
    }
    
    printf("Total number of single-digit prime numbers: %d\n", total);
    
    return 0;
}

