#include<stdio.h>
int main()
{
    int x=10;
    int *y, **z;
    y=&x;
    z=&y;
    printf("%d %d %d ",x, *y, **z);
    return 0;
}