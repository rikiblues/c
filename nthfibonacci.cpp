#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    printf("enter a positive number: ");
    scanf("%d", &n);
    if (n <= 0)
        printf("only positive numbers are allowed.\n");
    else
        printf("fibonacci number at position %d is %d\n", n, fibonacci(n));
}
