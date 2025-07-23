#include <stdio.h>

int main() 
{
    int matrix[10][10], transpose[10][10];
    int row, col, i, j;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) 
	{
        for(j = 0; j < col; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < row; i++) 
	{
        for(j = 0; j < col; j++) 
		{
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(i = 0; i < col; i++) 
	{
        for(j = 0; j < row; j++) 
		{
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

