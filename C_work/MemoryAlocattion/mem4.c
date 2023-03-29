#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int *ptr=(int *)malloc (20);
    
    printf("%d\n",sizeof(p));
    free(p);

    return 0;
}