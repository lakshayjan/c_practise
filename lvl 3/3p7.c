#include<stdio.h>
int compare_numbers(int no1,int no2);
int main()
{
    int x,y,result;
  printf("enter a no.1 and no.2 :");
  scanf("%d %d",&x,&y);
  result = compare_numbers(x,y);
 
  if (result==1)

  {
     printf("output : same ");  /* code */
  }
  else {
   printf("output : not same ");
}
return(0);
}
int compare_numbers(int no1,int no2)
{ int result;
    if (no1==no2)
    {
       return(1); /* code */
    }
    else
    {
        return( 0);
    }
}
