#include<stdio.h>
 int main() {
    int i,j ,y,count, vag = 0,prime=0,sum,total=0;
     for ( i = 0; i<=1000000 ; i++)
        {  int count = 0;

           for(j = 1; j<=i; j++)
           {
              if(i%j==0)/* code */
             { count++ ;
             }
           }
             if(count==2)
            {  vag++;
                prime  = i;
                 printf("result:%d\n",prime);
                sum = 0;/* code */
              
               while (prime>0)
               {
                  sum = sum + (prime%10); 
                  prime = prime/10;      /* code */
                 
               }
          
              if(sum  == 14)total++;
             
           
        }   
 }
        printf("result:%d\n",total); 
 }