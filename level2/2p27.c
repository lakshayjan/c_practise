//Write a program to print the total count of numbers which are less than

//100000 and whose sum of digits is 14.
#include<stdio.h>
int main () {
int i ,digit,sum, count = 0;
for ( i =1; i <=100000; i++)
{   sum =0;
    int temp = i;
   while (temp!=0)
   {
      digit = temp%10;
      sum = sum+digit;
      temp=temp/10;
   }
   
   if (sum == 14)
   {
    count++;/* code */
   }
   
}
printf(" total count of numbers which are less than 100000 and whose sum of digits is 14: %d\n",count); 
                           
}