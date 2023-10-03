#include<stdio.h>
int main ()
{
            int x,y,z,ones,tens ,sum ,hundred;
            printf("Enter 3 Number :");
            scanf("%d",&x);
            ones = x%10;
            tens   = (x/10)%10;
            hundred = x/100;
            sum = ones + tens + hundred;
            if (sum <10) 
                printf("sum: %d",sum);

              else
              {
                 ones = sum%10;
                 tens = sum/10;
                 sum = ones +tens;
                  if (sum<10)
                   printf("%d",sum);  /* code */
                  else 
                  {
                   ones = sum%10;
                 tens = sum/10;
                 sum = ones +tens;
                 printf("%d",sum);
                
                
                 }
}
}