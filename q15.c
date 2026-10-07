//Write a C program to find the minimum element in a Stack using an array.

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push();
void pop();
void display();
void min();
int main()
{
    int choice;
    printf("Press 1:push 2:pop 3:display 4:min 0:exit\n");
    while(1)
    {
        printf("enter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:min();break;
            case 0:exit(1);break;
            default:printf("wrong choice...");
        }
    }
    return 0;
}
void push()
{
    int element;
    if(top==MAX-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top=top+1;
        printf("enter element:");
        scanf("%d",&element);
        stack[top]=element;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty:");
    }
    else
    {
       printf("Stack elements are below\n"); 
       for(i=top;i>=0;i--)
       {
            printf("%d\n",stack[i]);
       }
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Popped element %d\n",stack[top]);
        top=top-1;
    }
}
void min()
{
    int i;
    int minimum;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        minimum=stack[0];
        for(i=0;i<=top;i++)
        {
            if(stack[i]<minimum)
            {
                minimum=stack[i];
            }
        }
        printf("Minimum  element %d\n",minimum);
    }
}
