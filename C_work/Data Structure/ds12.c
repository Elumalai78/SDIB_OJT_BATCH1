#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;
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
void del_node(node** head,node* del)
{
    if(*head==NULL||del==NULL)
    return;
    if(*head==del)
    *head=del->prev;
    if(del->prev!=NULL)
    del->prev->next=del->next;
    if(del->next!=NULL)
    del->next->next=del->next;
    free(del);
    return;

}
void disp(node *head)
{
    node* last;
    while(head!=0)
    {
        printf("%d",head->data);
        last=head;
        head=head->prev;
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
    del_node(&start,start);
    del_node(&start,start->prev);
    del_node(&start,start->prev);
    disp(start);
    return 0;
}

