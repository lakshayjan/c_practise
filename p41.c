#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter a Number: ");
    scanf("%d",&number1);
    number2 = 0;
    while(number1 != 0)
    {
        number2 = (number2 * 10) + (number1%10);
        number1 = number1/10;
    }
    while(number2 != 0)
    {
         printf("%c\n",((number2%10)+48));
      number2 = number2/10;
       
    }

}