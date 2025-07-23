#include <stdio.h>
int main() 
{
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;
	printf("Enter a string: ");
    gets(str);
	for (i = 0; str[i] != '\0'; i++) 
	{
        char ch = str[i];
        if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == ' ')
            spaces++;
        else if (ch == 'a' || ch == 'e' || ch == 'i' ||
                 ch == 'o' || ch == 'u' ||
                 ch == 'A' || ch == 'E' || ch == 'I' ||
                 ch == 'O' || ch == 'U')
            vowels++;
        else
            consonants++;
    }
    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
    printf("digits: %d\n", digits);
    printf("spaces: %d\n", spaces);
}
