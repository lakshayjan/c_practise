#include<stdio.h>
int main()
{
    int length,i;
    char string[50];
    printf("Enter the Number: ");
    scanf("%s",string);
    i=0;
    while(string[i] != 0)
    {
        if((string[i] < 48) || (string[i] > 57))
        {
            printf("Invalid Number\n");
            return 0;
        }
        i++;
    }
    printf("Valid Number\n");
}