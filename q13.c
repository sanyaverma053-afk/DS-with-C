//Write a program to demonstrate Stack Overflow.

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void  pop();
void display();
int main()
{
    int choice;
    printf("Press 1:pop 2:display 0;exit\n");
    while(1)
    {
        printf("enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:pop();break;
            case 2:display();break;
            case 0:exit(1);break;
            default:printf("wrong choice....");
        }
    }
    return 0;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("popped element is%d\n",stack[top]);
        top=top-1;
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
