#include<stdio.h>
int sub(int x ,int y );
int main () {
    int a,b,c;
    a = 10 , b = 20 ;
    c =  sub (a,b);
    printf("%d",c);

}

int sub(int x ,int y)
 {
 int z;
 z = x-y;
 return (z);
 }
