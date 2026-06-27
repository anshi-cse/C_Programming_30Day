#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols];

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("Transpose of matrix:\n");

    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
            printf("%d ", A[j][i]);

        printf("\n");
    }

    return 0;
}