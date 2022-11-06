// 2. Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>
int main()
{

  int a[3][3], b[3][3], c[3][3];
  int i, j, k, sum = 0;
  printf("Enter the 9 elements first matrix\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  }
  printf("ENter the 9 elements second matrix\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      scanf("%d", &b[i][j]);
  }
  printf(" multiplay the two matrix\n");
  for (i = 0; i < 3; i++)
  {

    for (j = 0; j < 3; j++)
    {
      sum = 0;
      for (k = 0; k <= 2; k++)
      {
        sum = sum + (a[i][k] * b[k][j]);
      }

      c[i][j] = sum;
    }
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" %d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}