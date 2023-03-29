#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data ;
    struct node *next;
} node;
void push ( struct node** head,int A)
{
   
   struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data= A;
    newnode->next= *head;
    *head=newnode;
}
void printlist(struct node* node)
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
    if(*head==NULL)
    printf("list is empty\n");
      
      else
      {
      node* temp;
      temp=*head;
      *head=(*head)->next;
      free(temp);
      }
      }
      int main()
{
    node*list=NULL;
    push(&list,5);
    push(&list,7);;
    push(&list,6);
    push(&list,9);
    printList(list);
    del(&list);
    printlist(list);

    return 0;
}
