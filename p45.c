#include<stdio.h>
int main()
{
    int length,i,j;
    char string1[50];
    char string2[50];
    printf("Enter the Number: ");
    scanf("%s",string1);
    i=0;
    while(string1[i] != 0) i++;
    for(j=0; j<i;j++)
    {
        string2[j] = string1[i-j-1];
    }
    string2[j] = 0;
    printf("Reverse of the Number = %s\n",string2);
}