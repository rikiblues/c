#include <stdio.h>
int main() 
{
    float c, f;
    printf("enter celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("fahrenheit: %.2f\n", f);
}
