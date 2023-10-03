#include<stdio.h>
int main(){
int x,y=0,ones_digit,tens_digit;
printf("enter two digit number:");
scanf("%d",&x);
  ones_digit = x%10;
  tens_digit = x/10;
  for (ones_digit= 0; ones_digit <=9;ones_digit--)
  
  {
    ones_digit - 1;/* code */
  }
  /*while (ones_digit!=0)
  {
    ones_digit - 1; code */
  y = tens_digit*10+ones_digit;
  
 printf("result :%d ",y);

 return 0;
}