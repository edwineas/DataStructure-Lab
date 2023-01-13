#include <stdio.h>
int partition(int A[], int l, int r)
{
    int key = A[l], i = l + 1, j = r;
    do
    {
        while (A[i] < key && i < r)
            i++;
        while (A[j] > key && j > l)
            j--;
        if (i < j)
        {
            int t;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    } while (i < j);
    {
        int t;
        t = A[l];
        A[l] = A[j];
        A[j] = t;
    }
    return j;
}
void Quicksort(int A[], int l, int r)
{
    if (l < r)
    {
        int pos = partition(A, l, r);
        Quicksort(A, l, pos - 1);
        Quicksort(A, pos + 1, r);
    }
}
void read(int A[], int n)
{
    int i;
    printf("Enter the elements in the array:");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
}
void print(int A[], int n)
{
    int i;
    printf("The sorted Array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
}
void main()
{
    int A[100], n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    read(A, n);
    Quicksort(A, 0, n - 1);
    print(A, n);
}
