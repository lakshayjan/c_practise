#include <stdio.h>
#include <math.h>

int main() {
    int number, digit,onesdigit,tensdigit,twodigit, sum = 0, i, isPrime = 1,hundreddigit;

    printf("Enter a number: ");
    scanf("%d", &number);
   
   tensdigit = (number/10)%10; 
   hundreddigit = number/10/10%10;   
    twodigit = tensdigit*10 + onesdigit;
    
    for(i = 2; i <= twodigit/ 2; ++i) {
        if (twodigit % i == 0) {
            isPrime = 0;
            break;
        }
    }

     if (isPrime)
        printf(" is a prime" );
    else
        printf(" not a prime ");

    return 0;
}

