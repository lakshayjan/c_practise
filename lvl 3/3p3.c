#include<stdio.h>
 int fun(int check_number);
int main ()
{
    int x ,number ,sum ;
    printf("input :");
    scanf("%d",&x);
    sum = fun(x);
    if (sum == 14)
    {
        printf("output: sum of digit is 14");
    }
    else{
        
        printf("output: sum of digit is not 14");
    }
    }
 int fun(int check_number)
  {
     int sum = 0;
    while (check_number!=0)
    {
      
        int num = check_number%10;
        sum = sum + num ;
        check_number= check_number/10;
    
    
    }
    
       return(sum);  // Return the sum after the loop is done
  }