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
  void del(node** head,int pos)
  {
    int i=1;
    node* temp;
    node* prev;
    prev=*head;
    while(i<pos-1)
    {
        prev=prev->next;
        i++;
    }
        temp=prev->next;
        prev->next=temp->next;
        free(temp);
    }
  
  int main()
  {
    node* list=NULL;
    push(&list,5);
    push(&list,7);
    push(&list,3);
    push(&list,1);
    printlist(list);
    del(&list,3);
    printlist(list);
   return 0;
  }