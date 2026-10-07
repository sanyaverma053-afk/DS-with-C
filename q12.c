//Write a program to demonstrate Stack Overflow.

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void  push();
void display();
int main()
{
    int choice;
    printf("Press 1:push 2:display 0;exit\n");
    while(1)
    {
        printf("enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();break;
            case 2:display();break;
            case 0:exit(1);break;
            default:printf("wrong choice....");
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
