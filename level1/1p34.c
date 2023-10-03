#include<stdio.h>
int main ()
{
            int x,y,ones,tens1,hundred,diference,tens2;
            printf("Enter Number1 :");
            scanf("%d",&x);
            printf("Enter Number2 :");
            scanf("%d",&y);
             
            ones = x%10;
            tens1 = x/10%10;
            hundred = x/100;
          
            ones = y%10;
            tens2 = y/10%10;
            hundred = y/100;

        if (tens1>tens2)
         {  ones = x%10;
            hundred = x/100;
         }
           else(tens2>tens1);
           { ones = y%10;
            hundred = y/100;
           }
           if (ones>hundred)
            diference=ones-hundred;
        
         
         else
          diference= hundred-ones;
         
        
        printf("diference :%d",diference);
}
             

