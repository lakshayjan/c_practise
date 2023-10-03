// Print the largest Three digit prime number
#include<stdio.h>
 int main() {
    int i,j ,y, vag = 0;
   //char vag[]= {""};
     for ( i = 100; i<=999  ; i++)
        {  int count = 0;

           for(j = 1; j<=i; j++)
           {
              if(i%j==0)/* code */
             { count++ ;
             }
           }
             if(count==2)
            {  vag++;
             
                y=i;
                
            }    
        }      printf("%d\n",y);   
 }        