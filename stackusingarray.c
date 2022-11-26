#include<stdio.h>

void printarray(int a[], int n)
{	
    int i;
    if (n==0)
     printf("Stack is empty\n");
    else
    {
        printf("Stack :- ");
        for (i=0; i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}

int push (int s[], int size, int t, int x)
{
    if(t<size)
    {
        s[++t]=x;
        return t;
    }
    return -1;
}

int pop (int s[], int t)
{
    if (t<1)
        return -1;
    return s[t-1];
}

void main ()
{
    int o=0,x,t=0,r,size;
    printf("Enter the size of the stack : ");
    scanf("%d",&size);
    int s[size];
    while (o!=4)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d",&x);
            r=push(s,size,t,x);
            if (r==-1)
                printf("Np space left\n");
            else
            {
                s[t]=x;
                printf("Data added sucessfully\n");
                t=t+1;
            }
            break;
        case 2:
            r=pop(s,t);
            if (r==-1)
                printf("No elements present\n");
            else
            {
                printf("Data out = %d\n",r);
                t=t-1;
            }
            break;
        case 3:
            printarray(s,t);
            break;
        case 4:
            break;
        default:
            printf("Entered the wrong option\n");
        }
    }
    
}