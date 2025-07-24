#include <stdio.h>
int main() 
{
    int n, i, num;
    int positiveCount = 0, negativeCount = 0;
    printf("number of elements: ");
    scanf("%d", &n);
    printf("enter %d numbers:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &num);
        if(num > 0)
            positiveCount++;
        else if(num < 0)
            negativeCount++;
    }
    printf("number of positive numbers: %d\n", positiveCount);
    printf("number of negative numbers: %d\n", negativeCount);
}
