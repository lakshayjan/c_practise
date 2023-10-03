#include<stdio.h>
int main(){
int x,y,ones,tens,hundred;
printf("enter three digit number:");
scanf("%d",&x);
   ones=x%10 ;
  tens= 0;
  hundred = x/100;
 y = hundred*100+tens*10+ones;
 printf("three digit no.:%d",y );

 return 0;
}