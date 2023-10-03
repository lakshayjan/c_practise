#include <stdio.h>

int main() {
    int number, reverse;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract the tens digit and ones digit
   int ones = number%10;
   int tens = number/10%10;
   int hundred = number/10/10%10;
   int thousand = number/10/10/10;
    // Reverse the number
    reverse = ones * 1000+ tens*100 + hundred*10 + thousand;

    printf("The reverse is: %d\n", reverse);

    return 0;
}

