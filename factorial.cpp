#include <stdio.h>
int main() 
{
    int n, i;
    int fact = 1;
    printf("number: ");
    scanf("%d", &n);
    if (n < 0) 
	{
        printf("negative numbers factorial doesn't exist'.\n");
    } 
	else 
	{
        for (i = 1; i <= n; i++) 
		{
            fact = fact * i;
        }
        printf("factorial of %d is %d\n", n, fact);
    }
}
