#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *create(struct node *head);
void display(struct node *head);
struct node *deleteAtBeg(struct node *head);
struct node *deleteAtEnd(struct node *head);
struct node *deleteAtPos(struct node *head);
int main()
{
    struct node *head=NULL;
    int choice;
    while(1)
    {
        printf("Press 1:create 2:display 3:deleteAtBeg 4:deleteAtEnd 5:deleteAtPos 0:exit\n");
        printf("\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=create(head);break;
            case 2:display(head);break;
            case 3:head=deleteAtBeg(head);break;
            case 4:head=deleteAtEnd(head);break;
            case 5:head=deleteAtPos(head);break;
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
struct node *deleteAtBeg(struct node *head)
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("linked list underflow\n:");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("node deleted successfully:");
        
    }
    return head;
}
struct node *deleteAtEnd(struct node *head)
{
    struct node *ptr=head,*preptr;
    if(ptr==NULL)
    {
        printf("linked underflow:");
    }
    else if(ptr->next==NULL)
    {
        head=NULL;
        printf("node deleted:");
        free(ptr);
    }
    else
    {
        while(ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=NULL;
        free(ptr);
        printf("node deleted succesfully..");
    }
    return head;
}
struct node *deleteAtPos(struct node *head)
{
    struct node *ptr,*preptr;
    int i,pos;
    if(head==NULL)
    {
        printf("list underflow:");
    }
    else
    {
        printf("enter position to delete a node:");
        scanf("%d",&pos);
        ptr=head;
        if(pos==1)
        {
            head=ptr->next;
            free(ptr);
        }
        else
        {
            i=1;
            while(i<pos)
            {
                preptr=ptr;
                ptr=ptr->next;
                i++;
            }
            preptr->next=ptr->next;
            free(ptr);
        }
        printf("node deleted succesfully..");
    }
    return head;
}
    
