#include <stdio.h>

int main()
{
    int n, i, j, symmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != A[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is Not Symmetric.\n");

    return 0;
}