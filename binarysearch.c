#include<stdio.h>

int binarysearch (int a[], int l, int r, int x)
{
    int m;
    if (l<=r)
    {
        m=(l+r)/2;
        if (a[m]==x)
            return m;
        if (x<a[m])
            return binarysearch(a,l,m-1,x);
        return binarysearch(a,m+1,r,x);
    }
    return 0;
}

void sort(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;++i)
        for(j=0;j<n-i-1;++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
}

void main()
{
    int n,i,x,a[50],l,r;
    printf("Enter the total number of elements\t");
    scanf("%d",&n);
    printf("Enter the numbers of the array\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    printf("Enter the number to search\t");
    scanf("%d",&x);
    l=0;
    r=n;
    if(binarysearch(a,l,r,x)==0)
        printf("%d is not present in the array\n",x);
    else 
        printf("%d is present in the array at position : %d\n",x,binarysearch(a,l,r,x)+1);
}