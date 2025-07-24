#include <stdio.h>
int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() 
{
    int num;
    printf("enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) 
	{
        printf("factorial is not defined for negative numbers.\n");
    } else
	{
        int result = factorial(num);
        printf("factorial of %d is %d\n", num, result);
    }
}

