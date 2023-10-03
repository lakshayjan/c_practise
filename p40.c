#include<stdio.h>
int main()
{
    int i,j,number;
    char string1[50];
    char string2[50];
    printf("Enter a Number: ");
    scanf("%d",&number);
    i = 0;
    while(number != 0)
    {
        string1[i] = (number%10) + 48;
        number = number/10;
        i++;
    }
    j = 0;
    i--;
    for(j=0; j<=i; j++)
    {
        string2[j] = string1[i-j];
     }
      string2[i+1] = '\0'; //after the loop that reverses the string, where i points to the last valid character in string2. This ensures that string2 is properly null-terminated before printing.
    printf("Entered Number = %s",string2);
}