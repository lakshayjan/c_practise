//Write a program to get two numbers from user and print the LCM ofthose numbers.
#include <stdio.h>

int main() {
    int num1, num2;
    int max;
    int lcm = 1;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    while (1) {
        // Check if max is divisible by both numbers
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
