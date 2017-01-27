#include<stdio.h>
int binarysearch(int a[],int p,int r,int x)
{
	int q;
	int m=-1;
	q=(p+r)/2;
	if(p<=r)
	{
		if(a[q]==x)
			return q;
	    else if(a[q]>x) 
	    	binarysearch(a,p,q-1,x);
	    else
			binarysearch(a,q+1,r,x);
	}
	return -1;

}
void main()
{
    int a[20],n,t,i,ch;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter elements into the array(ascending order):");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search element:");
    scanf("%d",&t);
    ch=binarysearch(a,0,n-1,t);
    if(ch==-1)
    	printf("Search element is not found.\n");
    else
    	printf("Search element is found at position '%d'",ch+1);
}



