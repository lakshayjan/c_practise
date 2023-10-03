#include<stdio.h>
int main()
{
    int number,total;
    int ones, tens, hrds, tsds;
    total = 0;
    for (number = 1000; number < 10000; number++)
    {
        ones = number % 10;
        tens = (number /10) % 10;
        hrds = (number/100) % 10;
        tsds = number/1000;
        if(tsds < hrds)
            if(hrds < tens)
                if(tens < ones)
                    total++;
    }
    printf("Total number of 'Increasing digit' numbers between 1000 & 9999 is %d",total);
}