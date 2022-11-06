// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
  int a[3][3], i, j, max = 0, sum = 0, index = 0;

  printf("Enter the 9 element of matrix\n");

  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      scanf("%d", &a[i][j]);
  }
  printf("\nmatrix is \n");
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      printf("%3d", a[i][j]);
    printf("\n");
  }
  for (i = 0; i <= 2; i++)
  {
    sum = 0;
    for (j = 0; j <= 2; j++)
    {
      if (a[i][j] == 1)
        sum = (a[i][j]) + sum;
    }
    break;
  }

  if (sum > max)
  {
    max = sum;
    index = i;
  }
  printf("\nmaximum number of 1s = %d index %d ", max, index);
  return 0;
}