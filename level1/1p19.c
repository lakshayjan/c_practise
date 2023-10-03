#include<stdio.h>
int main(){
int x,y,ones,tens;
printf("enter three digit number:");
scanf("%d",&x);
 tens= x/10;
  ones= 2;
 y = tens*10+ones;
 printf("three digit no.:%d",y );

 return 0;
}