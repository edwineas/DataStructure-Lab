#include<stdio.h>
void swap(int a[],int i,int j)
{
	int t;
	t = a[i];
	a[i]=a[j];
	a[j]= t;
}
void selectionsort(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=i;
		for(j=i+1;j<=n;j++)
			if(a[j]<a[k])
				k=j;
		swap(a,i,k);
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
	selectionsort(a,n);
	printf("Sorted array is : \n");
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
		printf(" ");		
	}
}
