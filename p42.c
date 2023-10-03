#include<stdio.h>
int main()
{
    int length,i;
    char string[50];
    printf("Enter the String: ");
    scanf("%s",string);
    i=0;
    length = 0;
    while(string[i] != 0)
    {
        length++;
        i++;
        
    }
    printf("Length of the Entered String = %d",length);
}