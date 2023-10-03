#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int total = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
        int digit = number % 100;
        if (digit >= 10 && digit <= 99) {
            int root = sqrt(digit);
            if (root * root == digit) {
                total++;
            }
        } 
        number /= 10;
    }
    printf("Total number of two-digit perfect square numbers: %d\n", total);
    
    return 0;
}
