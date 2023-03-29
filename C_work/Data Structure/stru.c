#include<stdio.h>
#include<stdlib.h>
struct node
{
    int rollnum;
    int mark;
    char branch;
    struct node *next;
    struct node *prev;
    };
void creat()
{
struct node *newnode,*head;
head= (struct node*) malloc (sizeof(struct node*));
head=newnode;

}
