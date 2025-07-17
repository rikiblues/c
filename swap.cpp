#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d", &b);
	printf("\nbefore swapping:\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping:\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
