/*Print the number of zeroes you encounter between the numbers 0 to
1000 */
#include <stdio.h>
int main(){
    int i,count=0,ones,tens;
    for ( i = 10; i <1000; i++)
    {
        ones = i%10;
        tens = (i/10)%10;

        if ((ones ==0) && (tens ==0))count+=2;
        if ((ones !=0)&& (tens ==0)) count+=1;
        if ((ones==0) && (tens !=0)) count+=1;
        
        /* code */
    }
        printf("result :%d",count);
    }

