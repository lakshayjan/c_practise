#include <stdio.h>

int main() {
    int number, reverse;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Extract the tens digit and ones digit
    int tens = number / 10;
    int ones = number % 10;

    // Reverse the number
    reverse = ones * 10 + tens;

    printf("The reverse is: %d\n", reverse);

    return 0;
}
