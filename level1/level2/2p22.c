#include <stdio.h>

int main() {
    int number;
    int total = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check each digit of the number
    while (number != 0) {
        int digit = number % 100;
        
        // If the digit is odd and two-digit, increment the total
        if (digit % 2 != 0 && digit >= 10 && digit <= 99) {
            total++;
        }
        
        number /= 10;
    }
    
    printf("Total number of odd two-digit numbers: %d\n", total);
    
    return 0;
}
