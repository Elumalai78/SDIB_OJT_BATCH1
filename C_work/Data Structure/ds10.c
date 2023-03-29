#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};
void push (struct node** head_ref,int data)
{
    struct node *ptr1=(struct node*)malloc(sizeof(struct node));
    struct node *temp=*head_ref;
    ptr1->data=data;
    ptr1->next=*head_ref;
    if(*head_ref !=NULL)
    {
        while (temp->next != *head_ref)
        temp=temp->next;
        temp->next=ptr1;
            }
            else
            ptr1->next=ptr1;
            *head_ref=ptr1;
}
void printlist(struct node *head)
  {
    struct node *temp=head;

    if(head!=NULL)
    {
        do
        {

        
        printf("%d [%p]->%p\n",temp->data,temp,temp->next);
        temp=temp->next;
        }
    while(temp!=head);
  }
  }
  int main()
{
    struct node* head=NULL;

    push(&head,12);
    push(&head,56);
    push(&head,2);
    push(&head,11);
    printlist(head);
    return 0;
}


