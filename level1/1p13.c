#include<stdio.h>
int main(){
int x,y,z;
printf("enter two digit number:");
scanf("%d",&x);
  y = x%10;
  z = x/10;

 printf("sum of two numbers:%d %d",y ,z);

 return 0;
}