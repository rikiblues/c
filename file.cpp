#include <stdio.h>
int main() 
{
    FILE *fptr;
    char data[100];
    fptr = fopen("example.txt", "w");
    if (fptr == NULL) 
	{
        printf("error opening file for writing!\n");
        return 1;
    }
    printf("enter some text to write to the file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fptr);                 
    fclose(fptr);
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) 
	{
        printf("error opening file for reading!\n");
        return 1;
    }
    printf("\nData read from the file:\n");
    while (fgets(data, sizeof(data), fptr)) 
	{
        printf("%s", data);
    }
    fclose(fptr);
}
