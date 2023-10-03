#include <stdio.h>

int main() {
    int number, reverse;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract the tens digit and ones digit
   int ones = number%10;
   int tens = number/10%10;
   int hundred = number/100;
    // Reverse the number
    reverse = ones * 100+ tens*10 + hundred;

    printf("The reverse is: %d\n", reverse);

    return 0;
}






