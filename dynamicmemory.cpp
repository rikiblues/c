#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *ptr;
    int n, i;
    printf("enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) 
	{
        printf("memory not allocated.\n");
        return 1;
    }
    printf("enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &ptr[i]);
    }
    printf("you entered:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
}
