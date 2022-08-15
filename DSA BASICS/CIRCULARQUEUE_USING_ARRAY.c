#include <stdio.h>
#include <stdlib.h>
#define max 5

int cqueue[max];
int front = -1;
int rear = -1;

int isEmpty()
{
        if (front == -1)
                return 1;
        else
                return 0;
}

int isFull()
{
        if ((front == 0 && rear == max - 1) || (front == rear + 1))
                return 1;
        else
                return 0;
}

void insert(int item)
{
        if (isFull())
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if (front == -1)
                front = 0;

        if (rear == max - 1) /*rear is at last position of queue*/
                rear = 0;
        else
                rear = rear + 1;
        cqueue[rear] = item;
}

int del()
{
        int item;
        if (isEmpty())
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item = cqueue[front];
        if (front == rear) /* queue has only one element */
        {
                front = -1;
                rear = -1;
        }
        else if (front == max - 1)
                front = 0;
        else
                front = front + 1;
        return item;
}

int peek()
{
        if (isEmpty())
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return cqueue[front];
}

void display()
{
        int i;
        if (isEmpty())
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue elements :\n");
        i = front;
        if (front <= rear)
        {
                while (i <= rear)
                        printf("%d ", cqueue[i++]);
        }
        else
        {
                while (i <= max - 1)
                        printf("%d ", cqueue[i++]);
                i = 0;
                while (i <= rear)
                        printf("%d ", cqueue[i++]);
        }
        printf("\n");
} /*End of display() */

int main()
{
        int choice, item;
        while (1)
        {
                printf("\n1.Insert\n");
                printf("2.Delete\n");
                printf("3.Peek\n");
                printf("4.Display\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                        printf("\nInput the element for insertion : ");
                        scanf("%d", &item);
                        insert(item);
                        break;
                case 2:
                        printf("\nElement deleted is : %d\n", del());
                        break;
                case 3:
                        printf("\nElement at the front is  : %d\n", peek());
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\nWrong choice\n");
                }
        }

        return 0;
}
