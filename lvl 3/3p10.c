#include <stdio.h>
int count_digits(int no);
int main()
{
int number, result;
printf("input :");
scanf("%d",&number);
result = count_digits(number);
printf("output :%d",result);
return 0;
}
int count_digits(int no)
{
int result ,number,count = 0;             // count of number enter from user
while (no !=0)
{                                      
  number = no%10; 
      count++;   
  
    no = no/10; 
}

return (count);
}