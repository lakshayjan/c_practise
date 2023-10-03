
#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Counting the number of digits
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}