#include <stdio.h>

int main() {
    int count = 0;  // Initialize counter to zero
    
    // Loop through numbers from 1 to 9
    for (int num = 1; num <= 10; num =num + 2) {
        count++;  // Increment counter for each odd number
    }
    
    printf("Total number of single-digit odd numbers: %d\n", count);
    
    return 0;
}