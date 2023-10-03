

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a,&b,&c);
	
	a>b&&a>c?printf("%d is the greatest.", a):(b>a&&b>c?printf("%d is the greatest.", b):printf("%d is the greatest.", c));
	
	getch();
	return 0;
}