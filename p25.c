//Program to Print the sum of all THREE digit Prime numbers
#include<stdio.h>
 int main() {
          
    int i,j,vag=0 ,sum = 0;
     for ( i = 100; i<=999  ; i++)
        {  int count=0;
           for(j = 1; j<=i; j++)
           {
              if(i%j==0)/* code */
             { count++;
             }
           }
             if(count==2)
            {  
               
                sum = sum +i;
                vag++; /* code */
            }
          
        } 
          printf("total sum of two digit no. :%d\n",sum);
         
 }       