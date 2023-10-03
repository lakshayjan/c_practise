#include<stdio.h>
int is_prime (int number);
int main ()
{
    int x , num , number;
    printf("input:");
    scanf("%d",&x);
    num =  is_prime(x);
    if ( num == 0)
    {
      printf("output: number is not prime "); 
    }
    else
    {
        printf("output: number is prime");
    }
}
int is_prime(int number)
{
    if (number<=1)
    {
        return(0);// not a prime number 
    }
    
    for (int i = 2; i<(number-1); i++)
    {
       if (number%i==0)
       {
          return(0); // not a  prime number 
       }

    }
     return(1); // prime number 
}