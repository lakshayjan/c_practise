#include<stdio.h>
int main(){
int x,y,ones,tens;
printf("enter two digit number:");
scanf("%d",&x);
 tens= 1;
  ones= x%10;
 y = tens*10+ones;
 printf("sum of two numbers:%d",y );

 return 0;
}