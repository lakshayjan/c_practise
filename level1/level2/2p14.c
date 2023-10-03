#include <stdio.h>
#include<math.h>

int main() {
    int number, originalNumber, firstDigit, lastDigit, reversedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number for later comparison
    originalNumber = number;

    // Get the last digit of the number
    lastDigit = number % 10;

    // Calculate the number of digits in the number
    int numberOfDigits = 0;
    while (number != 0) {
        number /= 10;
        numberOfDigits++;
    }

    // Get the first digit of the number
    firstDigit = originalNumber / (int)pow(10, numberOfDigits - 1);

    // Remove the first and last digits from the original number
    originalNumber %= (int)pow(10, numberOfDigits - 1);
    originalNumber /= 10;

    // Interchange the first and last digits
    reversedNumber = lastDigit * (int)pow(10, numberOfDigits - 1) + originalNumber * 10 + firstDigit;

    printf("Number with first and last digits interchanged: %d\n", reversedNumber);

    return 0;
} 
