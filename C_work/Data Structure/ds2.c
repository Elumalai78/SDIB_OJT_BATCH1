#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};
void fun2(struct node* start)
{
    if (start == NULL)
    return;
    printf("%d",start->data);
    if(start->next != NULL)
    fun2(start->next->next);
   printf("%d",start->data);

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
    fun2(head);
    return 0;
}
