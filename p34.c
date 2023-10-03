#include<stdio.h>
int main()
{
   int number,forward,reverse,total;
    total = 0;
    for (number = 0; number <100; number++)
    {
        forward = number;
        reverse = 0;
        while(forward)
        {
            reverse = reverse * 10 + (forward%10);
            printf("%d\n",reverse);
            forward = forward/10;
                printf("%d\n",forward);
             
         
        }
        if(number == reverse) total++;
       
    }
    printf("total number of all Palindrome numbers less than 100000 is %d",total);
}