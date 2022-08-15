#include <stdio.h>
#include <stdlib.h>
#define max 5

int stack[max];
int top = -1;

int isfull()
{
    if (top == max-1)
    {
        return 1;
    }
    return 0;
}

int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

void push(int item)
{
    if (isfull())
    {
        printf("STACK OVERFLOW:\n");
    }
    else
    {
        top++; // top=top+1 or top+=1
        stack[top] = item;
    }
}
void pop()
{
    int item;
    if (isempty())
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("POPPED ELEMENT IS::%d\n", item);
    }
}

void peek()
{
    if (isempty())
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        printf("THE TOP ITEM IN THE STACK IS %d\n", stack[top]);
    }
}
void display()
{

    if (top == -1)
    {
        printf("STACK IS EMPTY\n");
        return;
    }
    int i;
    printf("\nTHE ITEMS IN THE STACKS ARE : ");
    for (i = top; i >= 0; i--)
    {
        printf(" %d  ", stack[i]);
    }
}
int main()
{
    int ch, item;
    while (1)
    {
        printf("\n1.PUSH \n");
        printf("2.POP \n");
        printf("3.DISPLAY THE TOP ELEMENT \n");
        printf("4.DISPLAY:\n");
        printf("5.QUIT\n");
        printf("ENTER YOUR CHOICE::\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("ENTER THE ELEMENT:\n");
            scanf("%d", &item);
            push(item);
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
            exit(1);
            break;
        default:
            printf("INVALID CHOICE:");
            return 0;
        }
    }
}