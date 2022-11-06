// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int a[3][3], i, j, count = 0;
    printf("Enter the 9 element of matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                ++count;
            }
        }
    }
    printf(" matrix is \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("%3d", a[i][j]); // %3d use space of two matrix
        printf("\n");
    }
    if (count > (3 * 3) / 2)
    {
        printf("matrix is sparse matrix \n");
    }
    else
        printf("matrix is not  sparse matrix \n");

    return 0;
}
