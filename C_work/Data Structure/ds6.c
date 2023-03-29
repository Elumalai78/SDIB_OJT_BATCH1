#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void push ( struct node** head,int A)
{
  
    node* newnode=malloc(sizeof(struct node));
    newnode->data=A;
    newnode->next= *head;
    *head=newnode;
}
void printlist( node* node)
  {
    while (node!=NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
    printf("\n");
  }
  void del(node** head)
  {
    node *prevnode;
    node *temp;
    temp=*head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;

    }
    if(temp==head)
    head=0;
    else
    prevnode->next=0;
    free(temp);
  }
  int main()
  {
    node* list=NULL;
    push(&list,5);
    push(&list,7);
    push(&list,6);
    push(&list,9);
    printlist(list);
    del(&list);
    printlist(list);
   return 0;
  }