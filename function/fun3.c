
#include<stdio.h>
int a = 5,b=6,c=7;   // global   here if local if not declare then global a will change to local value a
int main ()
{
    //int a,b,c;       // local will have priorty if local abc not decclare then a= 10 will go to global 
    a = 10;
    printf("%d",a);
}