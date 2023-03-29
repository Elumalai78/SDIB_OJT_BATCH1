#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
 } node;
    void push(struct Node** head,int A)
    {
        struct Node* newnode=malloc(sizeof(node));
        newnode->data=A;
        newnode->next=*head;
        *head=newnode;
    }
    void printlist(node* node)
    {
        while(node!=NULL)
        {
            printf("%d",node->data);
            node=node->next;
        }
        printf("\n");
        }
        void len(struct Node** head)
        {
            int count=0;
            node *temp;
            temp=*head;
            while(temp->next!=0)
            {
                count++;
                temp=temp->next;
            }
        }
            int main()
            {
                node *list=NULL;
                push(&list,5);
                push(&list,7);
                push(&list,6);
                push(&list,9);
                printlist(list);
                len(&list);
                return 0;

            }
    