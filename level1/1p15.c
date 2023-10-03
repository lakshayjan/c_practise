//Get a four-digit number from user and only reverse the
//first two digits of the number, then print the number.
#include<stdio.h>
int main(){
int x,y,z,e,f;
printf("enter four digit number:");
scanf("%d",&x);
  y = x%10;
  z = x/10%10;
  e = x/10/10%10;
  f = x/1000;

 printf("result :%d %d %d %d",f ,e ,y ,z);

 return 0;
}