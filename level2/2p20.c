//Write a program print total number of single digit Prime numbers
#include<stdio.h>
int main(){
int number,i,j,vag=0;
for ( i = 0; i<= 9; i++)
{  int count=0;
   for ( j = 1; j <=i; j++)
   {
    if (i%j==0)
    {
       count++;/* code */
    }
    
   }


   if (count == 2)
   {
    vag++;/* code */
   }
}
      printf("total no of single digit prime no: %d",vag);
   
}