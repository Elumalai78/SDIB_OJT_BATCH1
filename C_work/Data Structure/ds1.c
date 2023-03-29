#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct note *next;

};
void fun1(struct node* head)
{
    if(head==NULL)
    return;
    fun1(head->next);
    printf("%d",head->data);

}
void push (struct node** head_ref,int new_data)
{
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data= new_data;
    new_node->next= (*head_ref);
    (*head_ref)=new_node;
}
int main()
{
    struct node* head=NULL;
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    fun1(head);
    return 0;
}


