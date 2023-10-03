//Print the Smallest Four digit prime number
#include<stdio.h>
 int main() {
    int i,j ,y, vag = 0;
   //char vag[]= {""};
     for ( i = 1000; i<=9999  ; i++)
        {  int count = 0;

           for(j = 1; j<=i; j++)
           {
              if(i%j==0)/* code */
             { count++ ;
             }
           }
             if(count==2)
            {  vag++;
               printf("%d\n",i);
                i=y;
                
            }    
        }      
 }   
    