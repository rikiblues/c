#include <stdio.h>
int main() 
{
    int arr[3] = {10, 20, 30};
    int i, pos;
    printf("enter position to delete (1 to 3): ");
    scanf("%d", &pos);
	for (i = pos - 1; i < 2; i++) 
		{
            arr[i] = arr[i + 1];
        }
        printf("array after deletion:\n");
        for (i = 0; i < 2; i++) 
		{
            printf("%d ", arr[i]);
        }
}
