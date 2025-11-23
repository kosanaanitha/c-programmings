#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter A-matrix row & column sizes: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter B-matrix row & column sizes: ");
    scanf("%d%d", &r2, &c2);

    // Check multiplication condition
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible\n");
        exit(1);
    }

    printf("Enter A-matrix values:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter B-matrix values:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
