// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>
int main()
{
    int a[3][3] = {1, 2, 3,
                   4, 5, 6,
                   7, 8, 9};
    int row, colm, sum = 0;
    printf("***print the  sum of row number***\n ");
    for (row = 0; row <= 2; row++)
    {
        sum = 0;
        for (colm = 0; colm <= 2; colm++)
            sum += a[row][colm];
        printf(" %d ", sum);
        printf("\n");
    }
    printf("\n***print the  sum of colm number***\n ");
    for (row = 0; row <= 2; row++)
    {
        sum = 0;
        for (colm = 0; colm <= 2; colm++)
            sum += a[colm][row];
        printf(" %d ", sum);
    }
}