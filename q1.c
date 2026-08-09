#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push();
void pop();
void display();
void peek();
int main()
{
    int choice;
    printf("Press 1:push 2:pop 3:display 4:peek 0:exit\n");
    while(1)
    {
        printf("\nEnter Choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break; 
            case 0: exit(1); break;
            default: printf("Wrong Choice");
        }
    }
    return 0;
}
void push()
{
    int element;
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top = top + 1;
        printf("Enter the element:");
        scanf("%d", &element);
        stack[top] = element;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        printf("Popped element is:%d\n", stack[top]);
        top = top - 1;
    }
}
void display()
{
    int i;
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are below\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is:%d\n", stack[top]);
    }
}
