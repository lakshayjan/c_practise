#include <stdio.h>
int check_ascending(int no);
int main()
{
int number, result;
printf("input : ");
scanf("%d",&number);

result = check_ascending(number);
if(result == 1)
printf("yes");
else
printf("no");;
return 0;
}
int check_ascending(int no)
{
int result,num;
 int prevdigit = no%10;
  no/=10;
   while (no!= 0)
   {
     int curentdigit = no%10;
     if (curentdigit<prevdigit)
     {
       prevdigit = curentdigit;
       no/=10; 
     }
     else{
       return 0;
       break;
             }
   }
   
return 1;
}