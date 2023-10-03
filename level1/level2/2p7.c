#include <stdio.h>

int main() {
    int i,x, sum ,ones,tens;

    for (i = 10; i <= 99; i++) {
        if (i % 2 == 1) {
            x=i;
            ones=x%10;
            tens=x/10;
            sum = ones+tens;
        
      if (sum==7)
    {
       printf("sum of odd no:%d\n",x); /* code */
    }
    
        }
    
}
}