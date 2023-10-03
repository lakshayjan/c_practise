#include <stdio.h>
int swap_digits(int no);
int main()
{
int number, result;
printf("input :");
scanf(" %d",&number);
result = swap_digits(number);
printf(" %d",result);
return 0;
}
int swap_digits(int no)
{
int result,num,num_1;          // swap of two digit number
   num = no%10;                 
   num_1 = no/10;
   result = num*10 + num_1;
return( result);
}