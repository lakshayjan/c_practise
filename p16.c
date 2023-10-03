#include <stdio.h>

int main() {
    int count = 0;  // Initialize counter to zero
    
    // Loop through numbers from 1 to 9
    for (int num = 101; num <= 999; num =num + 2) {
        count++;  // Increment counter for each odd number
    }
    
    printf("Total number of two-digit odd numbers: %d\n", count);
    
    return 0;
}