#include<stdio.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head, *newnode, *temp,*tail;
void node()
{
head=(struct node*) malloc (sizeof(struct node));
printf("\n Enter The Data Value\t");
scanf("\n%d\t",newnode->data);
head->next=NULL;
head->prev=NULL;
}
void crteade()
{
int choice;
printf("\n Enter The How Many Node U Want\t");
scanf("\n%d\t", &choice);

while(choice!=0)
{
    newnode=(struct node*) malloc (sizeof(struct node*));
    printf("\n Enter the data\t");
    scanf("\n%d",newnode->data);
    head=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
    temp->next=newnode;
    newnode->prev=temp;
    }
    temp=newnode;
    }
}
void display()
{
    while(temp!=NULL)
    printf ("\n %d", temp->data);
    temp=temp->next;

}
void main()
{
    node();
    create();
    display();
    

}
