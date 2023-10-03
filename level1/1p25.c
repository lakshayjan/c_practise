#include<stdio.h>
int main ()
{
            int x,y,z,ones,tens , hundred;
            printf("Enter4 Number :");
            scanf("%d",&x);
            int a;
            tens  = x/10%10;
            
            hundred = x /100%10;
            y = (tens ==hundred) ;
            z = x-(y*5);
           

            printf("%d",z);
}