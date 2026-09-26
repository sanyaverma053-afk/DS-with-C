#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *create(struct node *head);
void display(struct node *head);
void sort(struct node *head);
int main()
{
    struct node *head=NULL;
    int choice;
    while(1)
    {
        printf("Press 1:create 2:display 3:sort 0:exit\n");
        printf("\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=create(head);break;
            case 2:display(head);break;
            case 3:sort(head);break;
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
void sort(struct node *head)
{
    int n=0,i,j,temp;
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        n++;
        ptr=ptr->next;
    }
    for(i=0;i<n-1;i++)
    {
        ptr=head;
        for(j=0;j<n-i-1;j++)
        {
            if(ptr->info > ptr->next->info)
            {
                temp=ptr->info;
                ptr->info=ptr->next->info;
                ptr->next->info=temp;
            }
            ptr=ptr->next;
        }
    }
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
}
