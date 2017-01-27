#include<stdio.h>
void insertinsorted(int a[],int *l,int x)
{
	int i;
	int j;
	for(i=0;i<*l;i++)
	{
		if(a[i]>x)
			break;
	}
	for(j=*l;j>i;j--)
		a[j]=a[j-1];
	a[i]=x;
	*l=*l+1;
}
void main()
{
    int a[20],n,t,i;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter elements into the array(ascending order):");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the insertion element:");
    scanf("%d",&t);
    insertinsorted(a,&n,t);
    printf("Resultant array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}