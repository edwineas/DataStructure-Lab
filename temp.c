#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *link;
} Node;
Node *top = NULL;
void push(int elem)
{
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->info = elem;
    p->link = top;
    top = p;
}
void peek()
{
    if (top == NULL)
    {
        printf("THE STACK IS EMPTY");
    }
    else
        printf("THE TOP ELEMENT IS %d", top->info);
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("THE STACK IS EMPTY");
    }
    else
    {
        printf("THE DELETED ELEMENT IS %d", top->info);
        top = top->link;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("THE STACK IS EMPTY");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->info);
            temp = temp->link;
        }
    }
}
void main()
{
    int elem, ch;
    do
    {
        printf("Enter your choice\n\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to be pushed\n");
            scanf("%d", &elem);
            push(elem);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            printf("The choice is invalid!!!\n");
        }
    } while (ch != 6);
}