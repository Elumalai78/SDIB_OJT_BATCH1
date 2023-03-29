#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} 
  *first = NULL;
void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *) malloc(sizeof (struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *) malloc(sizeof (struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
struct Node* LSearch(struct Node *p, int key)
{
    struct Node *q;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
int main()
{
    struct Node *temp;
    int A[] = { 8, 3, 7, 12 };
    Create(A, 4);
    temp = LSearch(first, 12);
    printf(" %d", temp->data);
    return 0;
}