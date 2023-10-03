#include<stdio.h>
int main ()
{
            int ones,tens,x,y,z;
            printf("Enter Number :");
            scanf("%d",&x);
            int a;
            ones = x%10;
            tens = x/10;
            y = (ones + tens) %2;
            z = x - (y*5);
            printf("output : %d",z);
}


