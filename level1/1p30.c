#include<stdio.h>
int main ()
{
            int x,y,z,ones,tens ,sum ,hundred;
            printf("Enter 4 Number :");
            scanf("%d",&x);
            tens   = x%100/10;
            hundred = x/100%10;
            sum = tens + hundred;
            if (sum ==10) 
            {
                if ((hundred>7)||(tens >7))
                    printf("success");
                 else
                    printf("faliure");
            }
              else  printf("faliure");
              
}
