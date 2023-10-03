#include<stdio.h>
int main () {
int i ,largestnumber ;
for ( i = 9999; i >=1000; i--)
{
   if ((i%7==0) && (i%9==0))
   {
     largestnumber =i;
     break;
     /* code */
   }
}printf("largest  number : %d\n",largestnumber); 
}