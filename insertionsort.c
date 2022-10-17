#include<stdio.h>
void insertionsort(int a[],int n)
{
	int i,j,x;
	for(i=2;i<=n;i++)
	{
		x=a[i];
		for(j=i-1;j>=1;j--)
			if(x<a[j])
				a[j+1]=a[j];
			else
				break;
		a[j+1]=x;
	}
	
}
void main()
{
	int i,j,n,a[50];
	printf("Enter the number of elements of array to be sorted\t");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);		
	}
	insertionsort(a,n);
	printf("Sorted array is : \n");
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
		printf(" ");		
	}
}
