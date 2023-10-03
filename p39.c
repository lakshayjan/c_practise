#include<stdio.h>
int main()
{
    int i,number;
    char string[50];
    printf("Enter a Number: ");
    scanf("%s",string);
    i = 0;    // initalize i to 0 so increment it 
    number = 0;     
    while(string[i] != 0)      // here we give condition string should not equal 0 
    {
        number = (number * 10) + (string[i] - 48);
        i++;
    }
    printf("Entered Number = %d",number);
}