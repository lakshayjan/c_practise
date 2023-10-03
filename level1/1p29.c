#include<stdio.h>
int main ()
{
            int x,y,z,ones,tens ,sum ,hundred;
            printf("Enter 4 Number :");
            scanf("%d",&x);
            int a;
            tens   = x/10%10;
            
           hundred= x %1000/100;
            sum = tens + hundred;
            if (sum >10) printf("success");
              else  printf("faliure");
              
}
              
