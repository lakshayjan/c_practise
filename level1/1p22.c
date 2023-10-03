#include<stdio.h>
int main ()
{
            int x,y,z;
            printf("input :");
            scanf("%d",&x);
            int a;
            a = x%100/10;
            y =  a %2 ;      // y = x - (a%2*5);
            z = x - (y*5);
            printf("output : %d",z);
}

