#include<stdio.h>
int add(int number, int add_value);
int main()
{
    int x,value,sum;
    printf("enter a number :");
    scanf("%d",&x);
    value = 2;
    sum = add(x,value);
    printf("output: %d\n",sum);
    return 0;
}
int add(int number ,int add_value)
{
    //int z;
    //z = number + add_value ;
    return (number + add_value );
}