#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int rear = -1;
int front = -1;

int is_full()
{
    if (rear == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int is_empty()
{
    if (rear == front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int item)
{
    if (is_full())
    {
        printf("QUEUE IS FULL\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=item;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = item;
    }
}

void dequeue()
{
    if (is_empty())
    {
        printf("THE QUEUE IS EMPTY:\n");
    }
     else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
} 

int peek()
{
    if (is_empty())
    {
        printf("\nQueue Underflow\n");
        return 0;
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    if (is_empty())
    {
        printf("THE QUEUE IS EMPTY:\n");
        return;
    }
    int i;

    printf("\nQueue  ELEMENTS is :\n\n"); 
    for (i = front; i <= rear; i++)
    {
        printf(" %d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int ch, item;
    while (1)
    {
        printf("1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DIPLAY ELEMENT AT THE FRONT\n");
        printf("4.DISPLAY ALL THE ELEMENTS \n");
        printf("5.EXIT\n");
        printf("ENTER YOUR CHOICE::\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("INPUT THE ELEMENT IN QUEUE::\n");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
             dequeue();
            break;
        case 3:
            printf("THE ELEMENT AT FRONT IS ::%d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("YOU ENTERED WRONG CHOICE::\n");
        }
    }
    return 0;
}