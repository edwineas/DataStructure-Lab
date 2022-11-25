#include <stdio.h>

int linearsearch (int a[], int n, int x)
{
    int i;
    for (i=0;i<=n;i++)
        if (a[i]==x)
            return (i+1);
        return 0;
}

void main ()
{
    int n,i,x,a[50];
    printf("Enter the total number of elements\t");
    scanf("%d",&n);
    printf("Enter the numbers of the array\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to search\t");
    scanf("%d",&x);
    if (linearsearch (a,n,x)==0)
        printf("%d is not present in the arra");
    else
        printf("%d is present in the array at position %d \n",x,linearsearch(a,n,x));
}