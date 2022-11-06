// 8. Write a program in C to print or display an upper triangular matrix.


#include<stdio.h>
int main()
{
   int a[3][3],i,j;
   printf("Enter the 9 element of matrix\n");
   for(i=0;i<=2;i++)
   {
      for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
   }
   for(i=0;i<=2;i++)
   {
      for(j=0;j<=2;j++)
        {
            if(i>j)
               a[i][j]=0;
        }
   }
   printf("\n print lower tringular of given matrix\n");
   for(i=0;i<=2;i++)
   {
      for(j=0;j<=2;j++)
        {
           printf(" %d ",a[i][j]);
        }
        printf("\n");
   }
   return 0;
}