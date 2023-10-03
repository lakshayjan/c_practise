#include <stdio.h>
#include<math.h>

int main() {
    int number, originalNumber,msb, numberofdigits,remainingnumber,output,msbodd;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number for later comparison
    originalNumber = number;


    // Calculate the number of digits in the number
    int numberOfdigits = 0;
    
    
    while (number >=10 ) {
        number /= 10;
        numberOfdigits++;
    
     
    }
   
     printf("number :%d",number); 
      msb = originalNumber / (int)pow(10, numberOfdigits );
         printf(" msb:%d",msb); 
     if (msb%2==0)
     {
       printf("output even :%d",originalNumber);
       return 0; /* code */
    }
      
      else if(msb%2==1)
      {
         msbodd= (msb - 1);/* code */
         printf("msbodd :%d",msbodd);
         remainingnumber = originalNumber % (int)pow(10,numberOfdigits);
         printf("remainingnumber : %d",remainingnumber);
          output = msbodd*(int)pow(10,numberOfdigits) ;
          output = output+remainingnumber ;
       printf("output : %d\n",output);

      }

    
   

    return 0;
}