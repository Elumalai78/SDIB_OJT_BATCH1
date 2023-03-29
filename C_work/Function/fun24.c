#include<stdio.h>
int fun(int(*)());

int main()
{
    fun(main);
    printf("Hi\n");
    return 0;
}
int fun(int (*p)())
{
    printf("Hello ");
    return 0;
}