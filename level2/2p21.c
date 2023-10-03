#include <stdio.h>
#include <math.h>

int main() {
    int number,digit,count=0;

    printf("Enter a number: ");
    scanf("%d", &number);
    while (number!=0)
    {
      digit = number%10;
      if(digit%2==1)
       count++;
       number/=10;
    } 
     printf("odd number:%d", count);
}

    