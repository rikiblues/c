#include <stdio.h>
int main() 
{
    int arr[5] = {10, 20, 40, 60};
    int i, pos, value;
    printf("enter position to insert (1 to 5): ");
    scanf("%d", &pos);
    printf("enter value to insert: ");
    scanf("%d", &value);
    for (i = 4; i >= pos; i--) 
	{
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
	printf("array after insertion:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
}
