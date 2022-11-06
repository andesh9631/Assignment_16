// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    printf("ENter the element matrix");
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
          {
            scanf("%d",&a[i][j]);
          }
    }
      
      for(i=0;i<3;i++)
      {
         for(j=0;j<3;j++)
           {
              if(i==j)
                sum+=a[i][j];
           }
      }
    
      printf("sum of digonal of matrix= %d ",sum);
    return 0;
    
}
