#include<stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
// Your Program Here
 y = x%100/10;
printf("The digit in hundred position is: %d\n",y);
return 0;
}
