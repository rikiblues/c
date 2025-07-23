#include <stdio.h>
int main() 
{
    char str[100];
    int length = 0, i = 0;
    printf("enter a string: ");
    gets(str);
    while (str[i] != '\0') 
	{
        length++;
        i++;
    }
    printf("length of the string: %d\n", length);
}
