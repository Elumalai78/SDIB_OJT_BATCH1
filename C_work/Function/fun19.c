#include<stdio.h>
int fun(int, int);
typedef int (*pf) (int, int);
int proc(pf, int, int);

int main()
{
    printf("%d\n", proc(fun, 6, 6));
    return 0;
}
int fun(int a, int b)
{
   return (a==b);
}
int proc(pf p, int a, int b)
{
   return ((*p)(a, b));
}