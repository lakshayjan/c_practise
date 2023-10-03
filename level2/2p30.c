//Write a program to get two numbers from user and print the HCF ofthose numbers.
#include <stdio.h>

int main() {
    int num1, num2;
    int min, hcf = 1;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    min = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
 #include <stdio.h>

int main() {
 
int i = 10,c;
//c=i++;
printf("%d %d",--i,++i);
 }
