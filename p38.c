#include<stdio.h>
int main()
{
  char string[50] ;     // here we are defining string length of 50 in array 
    printf("string : ");     // this functon prints the string 
    scanf("%s",string);    // this function scans or read the character entered from keyboard %s fs is to tell it
                          // it is a string so it will automatically print all character and stop after null cahracter 0
    printf("entered string = %s",string);
    }