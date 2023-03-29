#include<stdio.h>
int main()
{
    int a=10,b=11;
    int *p, *q;
    p=&a,&b;
    q=(&a,&b);
    printf("%d %d %d \n ",a,*p,*q);
    *q=*p;
    printf("%d %d %d \n ",b,*p,*q);
    return 0;
}