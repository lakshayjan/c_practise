#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("The reverse of the number is: %d\n", reversedNumber);

    return 0;
}