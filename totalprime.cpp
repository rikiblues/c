#include <stdio.h>
int main() 
{
    int i, j, count;
    printf("prime numbers from 1 to 100 are:\n");
    for (i = 2; i <= 100; i++) 
	{
        count = 0;
		for (j = 1; j <= i; j++) 
		{
            if (i % j == 0) 
			{
                count++;
            }
        }
		if (count == 2) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
}
