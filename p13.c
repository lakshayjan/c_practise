#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        int remainder = number % 10;
        sum = sum +remainder;
        number /= 10;
    }

    printf("The reverse of the number is: %d\n", sum);

    return 0;
}