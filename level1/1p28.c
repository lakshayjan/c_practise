#include<stdio.h>
int main ()
{
            int x,y,z,ones,tens ,sum ,hundred;
            printf("Enter 3 Number :");
            scanf("%d",&x);
            int a;
            ones  = x%10;
            
           hundred= x /100;
            sum = ones + hundred;
            if (sum < 10)
            {
                printf("success");
                
                
            }
            
              else
              {
                printf("faliure");

              }
}
              
