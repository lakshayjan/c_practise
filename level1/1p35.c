#include<stdio.h>
int main ()
{
            int x,y,ones1,tens1,hundred1,sum1,ones2,tens2,hundred2,sum2,sum;
            printf("Enter Number1 :");
            scanf("%d",&x);
            printf("Enter Number2 :");
            scanf("%d",&y);
             
            ones1 = x%10;
            tens1 = x/10%10;
            hundred1 = x/100;
          sum1 = ones1+hundred1;
            ones2 = y%10;
            tens2 = y/10%10;
            hundred2 = y/100;
            sum2 = ones2+hundred2;
            if (sum1>sum2)

            {
                sum =ones1+tens1+hundred1;  
                   /* code */
            }
             else 
             sum = ones2+tens2+hundred2;
             printf("%d",sum);
}