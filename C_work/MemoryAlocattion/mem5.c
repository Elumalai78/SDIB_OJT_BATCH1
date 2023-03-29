#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct test 
    {
        int i;
        float f;
        char c;

    };
    struct test *ptr;
    ptr=(struct test *)malloc (sizeof(struct test));
    ptr-> f=6.5f;
    printf("%0.2f\n",ptr->f);
    return 0;
}