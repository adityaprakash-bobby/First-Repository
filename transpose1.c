#include <stdio.h>
void transpose(int a[][20],int *r,int*c)
{
    int temp,i,j;
    for (i=0;i<*r;i++)
    {
        for (j=0;j<*c;j++)
        {
          if(i<j)
          {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
          }
        }
    }
    temp=*r;
    *r=*c;
    *c=temp;
}
void main()
{
    int a[20][20];
    int i,j,m,n;
    printf("Enter the order of the matrix \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix\n");
    for (i=0;i<m;++i)
    {
        for (j=0;j<n;++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The given matrix is \n");
    for (i=0;i<m;++i)
    {
        for (j=0;j<n;++j)
        {
            printf("  %d",a[i][j]);
        }
        printf("\n");
    }
    transpose(a,&m,&n);
    printf("The transposed matrix is \n");
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("  %d",a[i][j]);
        }
        printf("\n");
    }
}
