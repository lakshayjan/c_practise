#include<stdio.h>
int main ()
{
            int x,y,ones,tens;
            printf("Enter Number1 :");
            scanf("%d",&x);
            printf("Enter Number2 :");
            scanf("%d",&y);
            int sum;
            if (x>y)
             { ones = x%10;
               tens = x/10;
               sum = ones +tens;
               printf("%d",sum);
             }
               else
                 
                {
                   ones = y%10;
               tens = y/10;
               sum = ones +tens;
               printf("%d",sum); /* code */
                }
                
}     
       
            