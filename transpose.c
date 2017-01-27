#include <stdio.h>
void main()
{
    int array[10][10],temp;
    int i, j, m, n;

    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
   for (i = 0; i < m;i++)
    {
        for (j = 0; j < n;j++)
        {
          if(i<j)
          {
            temp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=temp;
          }
        }
    }
    printf("Transpose of matrix is \n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}
