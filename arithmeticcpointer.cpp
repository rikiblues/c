#include <stdio.h>
int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = arr;
    printf("pointer arithmetic demo:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("value at ptr + %d = %d\n", i, *(ptr + i));
    }
}
