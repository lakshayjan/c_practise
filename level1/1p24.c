#include<stdio.h>
int main ()
{
            int x,y,z,ones,tens , hundred;
            printf("Enter Number :");
            scanf("%d",&x);
            int a;
            ones  = x%10;
            
            hundred = x /100;
            y = (ones==hundred) ;
            z = x-(y*5);
           

            printf("%d",z);
}

