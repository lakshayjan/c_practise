#include<stdio.h>
int fun(int number);
int main()
{
    int x,reverse;
    printf("enter a number :");
    scanf("%d",&x);
   reverse = fun(x);
   printf("output:%d",reverse);
   return(0);
}
  int fun(int number){
  int num,reverseno=0;
    if(number<=9)
  {
   return(number); /* code */
  }
  while (number!=0)
  {
    num = number%10;
      reverseno = reverseno*10 + num; /* code */
      number = number/10;
  }
 return(reverseno);
  
  }