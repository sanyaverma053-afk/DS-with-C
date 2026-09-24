#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *create(struct node *head);
void display(struct node *head);
struct node *insertAtBeg(struct node *head);
struct node *insertAtEnd(struct node *head);
struct node *insertAtPos(struct node *head);
int main()
{
    struct node *head=NULL;
    int choice;
    while(1)
    {
        printf("Press 1:create 2:display 3:insertAtBeg 4:insertAtEnd 0:exit\n");
        printf("\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=create(head);break;
            case 2:display(head);break;
            case 3:head=insertAtBeg(head);break;
            case 4:head=insertAtEnd(head);break;
            case 5:head=insertAtPos(head);break;
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
struct node *insertAtBeg(struct node *head)
{
    struct node *temp,*ptr;
    int data;
    temp=(struct node *)malloc(sizeof(struct node ));
    printf("enter info at beginning of linked list:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    ptr=head;
    temp->next=ptr;
    head=temp;
    printf("node inserted successfully:");
    return head;
}
struct node *insertAtEnd(struct node *head)
{
    struct node *temp,*ptr;
    int data;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter insert node at end:");
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
    printf("node inserted succesfully..");
    return head;
}
struct node *insertAtPos(struct node *head)
{
    struct node *temp,*ptr;
    int data,i,pos;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter info:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    printf("enter position at which you want to insert:");
    scanf("%d",&pos);
    i=1;
    ptr=head;
    while(i<pos-1)
    {
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    printf("node inserted successfully...");
    return head;
}
