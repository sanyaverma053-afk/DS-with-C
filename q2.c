#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int);
int pop();
int main()
{
int num, rem;
printf("Enter a decimal number: ");
scanf("%d", &num);
while(num > 0)
{
rem = num % 2;
push(rem);
num = num / 2;
}
printf("Binary number: ");
while(top != -1)
{
printf("%d", pop());
}
return 0;
}
void push(int element)
{
if(top == MAX - 1)
{
printf("Stack Overflow");
}
else
{
top = top + 1;
stack[top] = element;
}
}
int pop()
{
int element;
if(top == -1)
{
printf("Stack Underflow");
return -1;
}
else
{
element = stack[top];
top = top - 1;
return element;
}
}
