#include<stdio.h>

int main()
{
    int fun(int);
    int i = fun(10);
    printf("%d\n", --i);
    return 0;
}
int fun(int i)
{
   return (i++);
}