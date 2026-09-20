#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *create(struct node *head);
void display(struct node *head);
int main()
{
    struct node *head=NULL;
    int choice;
    while(1)
    {
        printf("Press 1:create 2:display 0:exit\n");
        printf("\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=create(head);break;
            case 2:display(head);break;
            case 0:exit(1);break;
            default:printf("wrong choice ...");
        }
    }
    return 0;
}
struct node *create(struct node *head)
{
    struct node *temp, *ptr;
    int data;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter info:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    printf("node created successfully:\n");
    return head;
}
void display(struct node *head)
{
    struct node *ptr=head;
    if(head==NULL)
        printf("empty linked list...\n");
    else
    {
        printf("\n linked list:\n");
        while(ptr!=NULL)
        {
            printf("%d->",ptr->info);
            ptr=ptr->next;
        }
        printf("NULL\n");
    } 
}

