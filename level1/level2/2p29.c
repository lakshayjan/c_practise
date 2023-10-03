//Write a program to get three numbers from user and print the LCM ofthose numbers.#include <stdio.h>

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the maximum of the three numbers
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    int lcm = max;

    while (1) {
        // Check if lcm is divisible by all three numbers
        if (lcm % num1 == 0 && lcm % num2 == 0 && lcm % num3 == 0) {
            break;
        }
        lcm++;
    }

    printf("The LCM of %d, %d, and %d is: %d\n", num1, num2, num3, lcm);

    return 0;
}
