#include<stdio.h>
int fun(int number);
int main()
{
    int x, num,zeroes,count;
    printf("enter the number :");
    scanf("%d",&x);
    zeroes = fun(x);
    printf("output :%d",zeroes);
}
int fun(int number){
    int num,count=0;

    if (number==0)
    {
        return(1);
    }
    while (number != 0)
    {
        if (number%10==0)
        {
          count++;  /* code */
        }
        
        number = number/10;
    }
    return(count);
}