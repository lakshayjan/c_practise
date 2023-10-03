//Write a program to print the sum of all TWO digit odd numbers
#include <stdio.h>

int main() {
    int sum = 0;  // Initialize sum to zero
    
    // Loop through numbers from 1 to 9
    for (int num = 11; num <= 99; num += 2) {
        sum += num;  // Add each odd number to the sum
    }
    
    printf("Sum of all two-digit odd numbers: %d\n", sum);
    
    return 0;
}