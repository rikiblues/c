#include <stdio.h>
int main() 
{
    int num, i, count = 0;
    printf("number: ");
    scanf("%d", &num);
	if (num <= 1) 
	{
        printf("not prime number.\n");
    } 
	else 
	{
        for (i = 1; i <= num; i++) 
		{
            if (num % i == 0) 
			{
                count++;
            }
        }
        if (count == 2) 
		{
            printf("prime number.\n");
        } 
		else 
		{
            printf("not prime number.\n");
        }
    }
}
