#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node* intrsc(node* head1, node* head2)
{
    while(head2)
    {
        node* temp=head1;
        while(temp)
        {
            if(temp==head2)
            return head2;
            temp=temp->next;

        }
        head2=head2->next;
    }
    return NULL;
}
int main()
{
node* newnode;
node* head1=(node*)malloc(sizeof(struct node));
head1->data=10;
node* head2=(node*)malloc(sizeof(struct node));
head2->data=3;
newnode=(node*)malloc(sizeof(struct node));
newnode->data=6;
head2->next=newnode;
newnode=(node*)malloc(sizeof(struct node));
newnode->data=9;
head2->next=newnode;
newnode=(node*)malloc(sizeof(struct node));
newnode->data=15;
head1->next=newnode;
head2->next->next->next=newnode;
newnode=(node*)malloc(sizeof(struct node));
newnode->data=30;
head1->next->next=newnode;
head1->next->next->next=newnode;
node* res=intrsc(head1,head2);
if(!res)
printf("%p\n",res->next);
else
printf("%p\n",res->data);
return 0;
}





