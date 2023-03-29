#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;
void ins(node **head,int num)
{
 node *newnode;
newnode=(node*) malloc(sizeof(node));
newnode->data=num;
newnode->next=NULL;
newnode->prev=(*head);
if((*head)!=NULL)
(*head)->next=newnode;
(*head)=newnode;
}
void disp( node *head)
{
    node* last;
    while(head!=0)
    {
        printf("%d",head->data);
        last=head;
        head=head->prev;
    }
    printf("\n");
    while(last!=NULL);
    {
        printf("\n %d",last->data);
    last=last->next;
    }
    printf("\n");
}
int main()
{
    node *start;
    start=NULL;
    ins(&start,2);
    ins(&start,6);
    ins(&start,9);
    ins(&start,3);
    disp(start);
    return 0;
}
