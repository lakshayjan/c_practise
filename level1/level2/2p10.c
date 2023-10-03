#include <stdio.h>

int main() {
    int i, sum = 0;

    for (int i = 1; i <= 99; i++) {
       if (i%2==1)
       {
          if (i/10==7)
          {
            sum += i; /* code */
          }
          /* code */
       }
       
       
        
    }

    printf("The sum of two-digit numbers whose tens's digit is 7: %d\n", sum);

    return 0;
}
