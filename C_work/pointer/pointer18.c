#include<stdio.h>
int main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    *ptr=*ptr *3;
    printf("%d",a);
    return 0;
}