#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, len;
    printf("enter a word: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) 
	{
        if (str[i] != str[len - 1 - i]) 
		{
            printf("not a palindrome.\n");
            return 0;
        }
    }
    printf("palindrome!\n");
    return 1;
}
