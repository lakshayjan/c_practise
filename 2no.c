#  include<stdio.h>
int main(){
int number, sum;
printf("enter two digit number");
scanf("%d",&number);
 int a = number/10;
 int b = number%10;
 sum = a+b;
 printf("sum of two numbers:%d",sum);

 return 0;
}