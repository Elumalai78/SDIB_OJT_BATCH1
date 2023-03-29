#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void create()
{
int choice;
struct node *newnode, *temp, *head;
printf("\n Enter The How Many Node u Want\t");
scanf("\n %d", &choice);
while(choice!=0)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter The Data Valu");
    scanf("\n %d", newnode->data);
    
    if(head==0)
    {
        head=newnode=temp;
    }
    else
    {
        head->next=newnode;
        newnode->prev=head;
    }
}
}  
int  main()
{
    create();
   struct node *temp,*head;
   int i=1;
 
    while(temp!=0)
    {
        temp=head;
    printf("\n %d", temp->data);
    temp->next=temp;
    temp++;

}
}

