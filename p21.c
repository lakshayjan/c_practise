
#include<stdio.h>
 int main() {
          
    int i,j,vag=0;
     for ( i = 10; i<=99  ; i++)
        {  int count=0;
           for(j = 1; j<=i; j++)
           {
              if(i%j==0)/* code */
             { count++;
             }
           }
             if(count==2)
             
            {vag++; /* code */
            }   
        }
         printf("total no of two digit prime no: %d",vag);
 }
         
       