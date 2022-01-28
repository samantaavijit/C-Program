#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void insert(int);
void add(int);
void append(int);
struct node
{
    int item;
    struct node *link;
} *head;
void display(struct node *r)
{
    r=head;
    if(r==NULL)
    {
        return;
    }
    while(r!=NULL)
    {
        printf("%d",r->item);
        r=r->link;
    }
    printf("\n");
}
void main()
{
    int i,data;
    struct node *n;
    head=NULL;
    while(1)
    {
        printf("1. INSERT\n");
        printf("2. DISPLAY\n");
        printf("3. SIZE\n");
        printf("4. DELETE\n");
        printf("5. EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                {
                     printf("Enter the number to insert");
                     scanf("%d",&data);
                     insert(data);
                     break;
                }
            case 2:
                {
                    if(head==NULL)
                    {
                        printf("List is empty\n");
                    }
                    else
                    {
                        printf("Elements in the list are : ");
                    }
                    display(n);
                    break;
                }
            case 5:
                {
                    return 0;
                }
                defult : printf("Invalid Option");
        }
    }
    getch();
}
void insert(int data)
{
    struct node *head1;
    head1=head;
    if(head1==NULL)
    {
        add(data);
    }
    else
    {
        append(data);
    }
}
void add(int data)
{
    struct node *head2;
    head2=(struct node *)malloc(sizeof(struct node));
    head2->item=data;
    if(head==NULL)
    {
        head=head2;
        head->link=NULL;
    }
    else
    {
        head2->link=head;
        head=head2;
    }
}
void append(int data)
{
    struct node *temp,*right;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->item=data;
    right=(struct node *)head;
    while(right->link!=NULL)
    {
        right=right->link;
    }
    right->item=temp;
    right=temp;
    right->link=NULL;
}
