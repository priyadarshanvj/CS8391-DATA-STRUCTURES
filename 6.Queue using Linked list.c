#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert()
{
    struct node *ptr;
    int ite;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("Overflow");
    else
    {
        printf("Enter any number to enter:");
        scanf("%d",&ite);
        ptr->value=ite;
        if(front==NULL)
        {
            front=ptr;
            rear=ptr;
            front->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
    }
}
void del()
{
    struct node *ptr;
    if(front==NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        ptr=front;
        front=front->next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
    {
        printf("Enter Queue");
    }
    else
    {
        printf("\nThe values are:");
        while(ptr!=NULL)
        {
            printf("\n%d\n",ptr->value);
            ptr=ptr->next;
        }
    }
}
void main()
{
    int c=1;
    while(c!=4)
    {
        printf("***Main Menu***");
        printf("\n1.Insert at front\n2.Delete an element\n3.Display\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter the correct choice!!!");
        }
    }
}
