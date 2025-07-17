#include<stdio.h>
#define PI 3.14
int main()
{
	float r, a;
	printf("enter the radius:");
	scanf("%f",&r);
	a=PI*r+r;
	printf("The area of the circle with radius %.2f is%.2f\n", r, a);
}
