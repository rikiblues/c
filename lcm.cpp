#include <stdio.h>
int main() 
{
    int a, b, i, gcd, lcm;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; i++) 
	{
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    lcm = (a * b) / gcd;
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
}
