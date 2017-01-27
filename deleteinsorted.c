#include<stdio.h>
void deleteinsorted(int a[],int *l,int x)
{
	int i;
	int j;
	for(i=0;i<*l;i++)
	{
		if(a[i]==x)
			break;
	}
	for(j=i;j<*l;j++)
		a[j]=a[j+1];
	*l=*l-1;
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
    printf("Enter the deletion element:");
    scanf("%d",&t);
    deleteinsorted(a,&n,t);
    printf("Resultant array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}