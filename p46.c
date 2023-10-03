# include<stdio.h>
int main()
{
    int i,j;
    char string[50];
    int array[50];
    printf("Enter the string: ");
    scanf("%s",string);
    i=0;
    while(string[i] != 0) i++;
    for(j=0; j<i;j++)
    {
         array[j] = string[j]-'0';
          
    }
    
    printf("Integer array: ");
        for( j = 0; j <i; j++)
        {
             printf("%d ", array[j]);
        }   
}