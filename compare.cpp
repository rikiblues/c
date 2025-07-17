#include<stdio.h>
int main()
{
	int a, b;
	printf("enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	if(a>b)
	{
		printf("The largest number is %d\n", a);
	}
	else if(b>a)
	{
		printf("The largest number is %d\n", b);
	}
	else
	{
		printf("Both numbers are equal.\n");
	}
}
