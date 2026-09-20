#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int front=-1;
int rear=-1;
int queue[MAX];
void enqueue();
void dequeue();
void display();
void peek();
int main()
{
    int choice;
    printf("Press 1:enqueue 2:dequeue 3:display 4:peek 0:exit\n");
    while(1)
    {
        printf("\nEnter Choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: peek(); break; 
            case 0: exit(1); break;
            default: printf("Wrong Choice");
        }
    }
    return 0;
}
void enqueue()
{
    int element;
    if(rear == MAX - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front==-1)
        front=0;
        rear=rear+1;
        printf("Enter the element:");
        scanf("%d", &element);
        queue[rear] = element;
    }
}
void dequeue()
{
    int x;
    if(front== -1||front=rear+1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        x=queue[front];
        printf("dequeue element is:%d\n", x);
        front =front + 1;
    }
}
void display()
{
    int i;
    if(front == -1||front=rear+1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Stack elements are below\n");
        for(i = front; i <=rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}
