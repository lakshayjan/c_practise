#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int total = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check each digit of the number
    while (number != 0) {
        int digit = number % 10;
        
        // If the digit is a single-digit perfect square, increment the total
        if (digit >= 0 && digit <= 9) {
            int root = sqrt(digit);
            if (root * root == digit) {
                total++;
            }
        }
        
        number /= 10;
    }
    
    printf("Total number of single-digit perfect square numbers: %d\n", total);
    
    return 0;
}
