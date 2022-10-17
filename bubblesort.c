#include<stdio.h>
void swap(int a[],int i,int j)
{
	int t;
	t = a[i];
	a[i]=a[j];
	a[j]= t;
}
void bubblesort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
				swap(a,j,j+1);
}
void main()
{
	int i,j,n,a[50];
	printf("Enter the number of elements of array to be sorted\t");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	bubblesort(a,n);
	printf("Sorted array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf(" ");		
	}
}
