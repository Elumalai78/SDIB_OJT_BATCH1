#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
struct node *head, *newnode ,*temp;
void node()
{
newnode=(struct node*) malloc (sizeof(struct node));
printf("\n Enter The Head Data \n");
scanf("\n %d",newnode->data);
head=newnode;
head->next=NULL;
}
void create()
{
    newnode=(struct node*) malloc (sizeof(struct node));
    head->next=newnode;
    printf("\n Enter Data After Head: \n");
    scanf("\n %d",newnode->data);
    temp=newnode;
    temp->next   
}
void display()
{
    while(temp->data!=NULL)
    head=temp;
    printf("\n %d",temp->data);
    temp=temp->next;
      
}
int main()
{
    node();
    display();

}