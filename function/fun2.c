
#include<stdio.h>
int add_local_global(int);
int a = 5,b=6,c=7;
int main ()
{
    int a,b,c;
    a = 10;                                 // here variable name is same i add local and global 
    c = add_local_global(a);
    printf("%d",c);
}
 int add_local_global(int x)
 {
    int y;
    y = x+a;                              // we have only intialised local a to x but a will search value and go                            global 
    return(y);                                    //         to global value of a because dont initialise 
 }