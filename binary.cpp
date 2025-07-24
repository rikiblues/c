#include <stdio.h>
int main()
{
    int n;
    printf("enter decimal: ");
    scanf("%d", &n);
    for (int i = 31; i >= 0; i--) 
	{
        int bit = (n >> i) & 1;
        if (bit || i <= 4)
            printf("%d", bit);
    }
    printf("\n");
    return 0;
}
