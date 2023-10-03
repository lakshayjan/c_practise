#include<stdio.h>

int main(){
    int i,*p ;
     i = 5;
     p = &i;
     *p = 10;
     printf("%x ,%x ",&i ,&p);
 
}