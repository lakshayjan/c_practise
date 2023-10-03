
#include <stdio.h>

int main() {
    int number, reverseno  = 0,sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating the sum of digits
    int temp = number;
    while (temp != 0) {
        int digit  = temp % 10;

        reverseno = reverseno*10 + digit;
        temp/=10;

        
    }

    printf("reverse number : %d\n",reverseno );

    return 0;
}