
        #include<stdio.h>
int main()
{
    int number1, number2, lcm;
    printf("Number1: ");
    scanf("%d",&number1);
    printf("Number2: ");
    scanf("%d",&number2);
    if( number1 > number2 )
        lcm = number1;
    else
        lcm = number2;
    while(1)
    {
        if((lcm % number1) == 0)
            if((lcm % number2) == 0)
                break;
        lcm++;
    }
    printf("LCM of number1 & number2 is %d",lcm);
}