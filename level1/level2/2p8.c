#include<stdio.h>
int main() {
    int i,x, sum ,ones,tens;

    for (i = 10; i <= 99; i++) {
        if (i % 2 == 0) {
            x=i;
            ones=x%10;
            tens=x/10;
            sum = ones+tens;
        
      if (sum==6)
    {
       printf("sum of even no with sum 6 :%d\n",x); 
    }
    
        }
    
}
return 0;
}