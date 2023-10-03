#include<stdio.h>
int main()
{
    int a[50];
    int i;
    for(i=0;i<=50;i++)
    {
        printf("enter an array:");
        scanf("%d",a[i]);
    }
    int b[50];
    for(i=0;i<=50;i++)
    {
        printf("enter an array:");
        scanf("%d",b[i]);
    }
    int c[50];
    for(i=0;i<=52;i++)
    {
        printf("the sum of array:%d",c[i]=a[i]+b[i]);
    }


}