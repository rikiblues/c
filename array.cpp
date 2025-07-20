#include <stdio.h>
int main() 
{
    int arr[4], i, max;
	printf("enter 4 numbers:\n");
    for (i = 0; i < 4; i++) 
	{
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < 4; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];  
        }
    }
    printf("largest number = %d\n", max);
}
