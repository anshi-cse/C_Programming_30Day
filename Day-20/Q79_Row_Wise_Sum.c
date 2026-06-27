#include <stdio.h>

int main()
{
    int rows, cols, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("Row-wise Sum:\n");

    for(i = 0; i < rows; i++)
    {
        sum = 0;
        for(j = 0; j < cols; j++)
            sum += A[i][j];

        printf("Row %d = %d\n", i + 1, sum);
    }

    return 0;
}