#include<stdio.h>
int sub (int number,int sub_value);
int main()
{
    int x,value =5,subtract;
    printf("enter a number :");
    scanf("%d",&x);
    subtract = sub(x,value);
    printf("output : %d\n",subtract);
    return(0);
}
 int sub (int number,int sub_value)
 {
    return(number-sub_value);
 }